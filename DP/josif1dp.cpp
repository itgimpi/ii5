#include <bits/stdc++.h>
using namespace std;
// Josephus Problem REC
int j(int n, int k) {
    
    vector<int>dp(n+1);
    // BC, samo 1 covek, on je resenje
    dp[1] = 0;

    for (int i = 2; i < n + 1; i++)
        dp[i] = (dp[i-1] + k) % i;
    return dp[n];
}

int main() {
    int n, k; cin >> n >> k;
    cout << j(n, k) + 1; // resenje se broji od 1
    }