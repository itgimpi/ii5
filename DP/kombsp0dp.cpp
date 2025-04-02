#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
// broj kombinacija sa ponavljanjem, loptica se vraca...
// dp, M(nk)
ull ksp1 ( ull n, ull k ) { // 
    vector<vector<ull>>dp(n+1);
    for ( int i = 0; i <= n; i++ ) dp[i].resize(k+1);

    for ( int i = 0; i <= k; i++ )
        dp[0][i] = 0; // prvi red

    for ( int i = 0; i <= n; i++ )
        dp[i][0] = 1; // prva kolona      

    // sledeci se dobija sabiranjem gornjeg i levog...
    for ( int nn = 1; nn <= n; nn++ ) // za svaki red...
        for ( int kk = 1; kk <= k; kk++ )
            dp[nn][kk] = dp[nn-1][kk] + dp[nn][kk-1];
    return dp[n][k];
    }

int main() {
    ull n, k; cin >> n >> k;
    cout << ksp1(n, k); }