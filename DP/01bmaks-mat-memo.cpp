#include <bits/stdc++.h>
using namespace std;
// Максимални збир на путу кроз матрицу
// https://petlja.org/sr-Latn-RS/biblioteka/r/Zbirka2/max_zbir_puta_kroz_matricu
// memoisation

int najzbir(const vector<vector<int>>&mat, 
            int n, int r, int k, vector<vector<int>>&memo) {
    // vec izracunato
    if ( memo[r][k] != -1 )
        return memo[r][k]; 
    // nije izracunato...
    // cilj?
    if ( r == 0 && k == 0 )
        return memo[0][0] = mat[0][0];
    // gore ili levo?
    int gore = 0, levo = 0;
    // moze li gore?
    if ( r > 0 ) 
        gore = mat[r][k] + najzbir(mat, n, r - 1, k, memo);
    // moze li levo?
    if ( k > 0 )
        levo = mat[r][k] + najzbir(mat, n, r, k - 1, memo);
    // prvi red?
    if ( r == 0) return memo[0][k] = levo;
    // prva kolona?
    if ( k == 0 ) return memo[r][0] = gore;

    return memo[r][k] = max( gore, levo);

}

int main() {
    int n; cin >> n;
    vector<vector<int>>mat(n);
    for ( int i = 0; i < n; i++ ) {
        mat[i].resize(n);
        for ( int j = 0; j < n; j++ )
            cin >> mat[i][j]; } 
    // matrica memoizacije, na -1, neizracunato
    vector<vector<int>>memo(n, vector<int>(n, -1));

    cout << najzbir(mat, n, n-1, n-1, memo); // top
    }
