#include <bits/stdc++.h>
using namespace std;
// Максимални збир на путу кроз матрицу
// https://petlja.org/sr-Latn-RS/biblioteka/r/Zbirka2/max_zbir_puta_kroz_matricu
// recursive

int najzbir(const vector<vector<int>>&mat, int n, int r, int k) {
    // cilj?
    if ( r == 0 && k == 0 )
        return mat[0][0];

    // gore ili levo?
    int gore = 0, levo = 0;

    // moze li gore?
    if ( r > 0 ) 
        gore = mat[r][k] + najzbir(mat, n, r - 1, k);
    // moze li levo?
    if ( k > 0 )
        levo = mat[r][k] + najzbir(mat, n, r, k - 1);

    // prvi red?
    if ( r == 0) return levo;
    // prva kolona?
    if ( k == 0 ) return gore;
    // nije ni (0,0), ni (0, k) ni (r, 0)
    return max( gore, levo );

}

int main() {
    int n; cin >> n; // dimenzija matrice
    vector<vector<int>>mat(n); // 
    for ( int i = 0; i < n; i++ ) {
        mat[i].resize(n);
        for ( int j = 0; j < n; j++ )
            cin >> mat[i][j]; } 
    cout << najzbir(mat, n, n-1, n-1); // top
    }
