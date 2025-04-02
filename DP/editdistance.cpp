#include <bits/stdc++.h>
using namespace std;
// Edit Distance DP
// Levenstain's Problem

int dist(const string &s1, const string &s2) {
    int n1 = s1.size();
    int n2 = s2.size();
    vector<vector<int>>dp(n1 + 1);
    for ( int i = 0; i <= n1; i++ ) dp[i].resize(n2 + 1);

    dp[0][0] = 0; // empty set -> empty set
    for (int i = 1; i <= n1; i++)
        dp[i][0] = i; // 1st col.
    for (int j = 1; j <= n2; j++)
        dp[0][j] = j;    //1st row
    for (int i = 1; i <= n1; i++)
        for (int j = 1; j <= n2; j++) {
            if ( s1[i-1] == s2[j-1] ) // ista slova?
                dp[i][j] = dp[i-1][j-1];
            //nisu ista...
            else {
                int r1 = dp[i-1][j] + 1;
                int r2 = dp[i][j-1] + 1;
                int r3 = dp[i-1][j-1] + 1;
                dp[i][j] = min({r1, r2, r3});
            }
        }
    return dp[n1][n2];

}

int main() {
    string s1, s2; cin >> s1 >> s2;
    cout << dist(s1, s2); }