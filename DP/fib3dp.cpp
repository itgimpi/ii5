#include <bits/stdc++.h>
using namespace std;
// Fibonacci, DP, T(n), M(n)

int dp[1010]; // do 1000

int fib ( int n ) { // DP
    dp[0] = dp[1] = 1;
    for (int i = 2; i <= n; i++)
        dp[i] = dp[i-1] + dp[i-2];
    return dp[n]; }

int main() {
    int n; cin >> n;
    cout << fib(n); }