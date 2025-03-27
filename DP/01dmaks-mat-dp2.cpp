#include <bits/stdc++.h>
using namespace std;
// Максимални збир на путу кроз матрицу
// https://petlja.org/sr-Latn-RS/biblioteka/r/Zbirka2/max_zbir_puta_kroz_matricu
// dp 2

int najzbir(const vector<vector<int>>&mat) {
    int n = mat.size();
    vector<int>dp(n);

    dp[0] = mat[0][0];

    for ( int k = 1; k < n; k++)
        dp[k] = dp[k-1] + mat[0][k];
    
    for ( int r = 1; r < n; r++ ) {
        dp[0]+=mat[r][0];

        for ( int k = 1; k < n; k++ )
            dp[k] = max( dp[k-1], dp[k] ) + mat[r][k];     }

    return dp[n-1];
}

int main() {
    int n; cin >> n; // dimenzija matrice
    vector<vector<int>>mat(n); // 
    for ( int i = 0; i < n; i++ ) {
        mat[i].resize(n);
        for ( int j = 0; j < n; j++ )
            cin >> mat[i][j]; } 
    cout << najzbir(mat); // top
    }
