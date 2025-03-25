#include <bits/stdc++.h>
using namespace std;
// broj kombinacija, n nad k, samo do k, M(nk)

long long komb ( int n, int k ) { // 
    vector<vector<long long>> dp(n+1); // n od 0 do n 
    for ( int nn = 0; nn < n + 1; nn++ )
        dp[nn].resize(min(nn+1, k+1)); // n=0 na 1, n=1 na 2, n=2 na 3, ... do k
    // rezervisana je memorija za trougao
    for ( int nn = 0; nn <= n; nn++ ) { // nn=0, 1, ... n, red po red...
        dp[nn][0] = 1; // prvi u redu je 1, n nad 0 je 1

        for ( int kk = 1; kk <= min(nn-1, k); kk++ )
            dp[nn][kk] = dp[nn-1][kk-1] + dp[nn-1][kk];

        if ( nn <= k ) dp[nn][nn] = 1; }
    return dp[n][k];
    }

int main() {
    int n, k; cin >> n >> k;
    cout << komb(n, k); }