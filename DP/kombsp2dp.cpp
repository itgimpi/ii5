#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
// broj kombinacija sa ponavljanjem, loptica se vraca...
// dp, M(n, k)
ull ksp3 ( ull n, ull k ) { // 
    vector<ull>dp(n+1, 1); // prvi red

    // sledeci se dobija sabiranjem gornjeg i levog...
    for ( int kk = 1; kk <= k; kk++ ) {
        dp[0] = 0;
        for ( int nn = 1; nn <= n; nn++ )
            dp[nn] += dp[nn-1];

    }

    return dp[n];
    }

int main() {
    ull n, k; cin >> n >> k;
    cout << ksp3(n, k); }