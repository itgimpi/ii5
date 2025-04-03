#include <bits/stdc++.h>
using namespace std;
// Bankomat
const int INF = 100000;

int resi(const vector<int> &nov, int iznos) {
    vector<int>dp(iznos + 1);
    dp[0] = 0;
    //for (int i = 1; i <= dp.size(); i++) {
    for (int i = 1; i <= iznos; i++) {
        dp[i] = INF; // pretpostavka je da ne moze
        for ( int n : nov )
            if ( i - n >= 0 )
                dp[i] = min( dp[i], 
                             dp[i - n] + 1 ); }
    for (int i = 0; i <= iznos; i++) cout << i << ' ' << dp[i] << endl;
    return dp[iznos];    
}

int main() {
    int iznos; cin >> iznos;
    int n; cin >> n;
    vector<int>nov(n);
    for (int i = 0; i < n; i++)
        cin >> nov[i];
    int brn = resi(nov, iznos);
    if ( brn == INF ) cout << -1;
    else cout << brn;
    }