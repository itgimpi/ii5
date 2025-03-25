#include <bits/stdc++.h>
using namespace std;
// broj kombinacija, n nad k, samo do k, M(k)

long long komb ( int n, int k ) { // 
    vector<long long> dp(k+1); // n od 0 do n 

    // samo 1 vektor
    dp[0] = 1; // prva kolona

    for ( int nn = 1; nn <= n; nn++ ) { // kaobajagi red po red...
        // sdesna na levo...
        if ( nn <= k ) dp[nn] = 1;

        for ( int kk = min(nn-1, k); kk > 0; kk-- )
            dp[kk] = dp[kk-1] + dp[kk];

         }
    return dp[k];
    }

int main() {
    int n, k; cin >> n >> k;
    cout << komb(n, k); }