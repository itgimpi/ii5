#include <bits/stdc++.h>
using namespace std;

int j1(int n, int k) {
    if (n==1) return 0;
    return (j1(n-1, k) + k) % n;
}

int j2(int n, int k) {
    vector<int>dp(n+1);
    dp[1] = 0;
    for (int i = 2; i < n+1; i++)
        dp[i] = ( dp[i-1] + k ) % i;
    return dp[n]; 
}

int main() {
    int n, k; cin >> n >> k;
    cout << j1(n, k) + 1 << '\n';
    cout << j2(n, k) + 1 << '\n';
    }