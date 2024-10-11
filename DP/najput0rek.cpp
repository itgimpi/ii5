#include <bits/stdc++.h>
using namespace std;
// Максимални збир на путу кроз матрицу
// https://petlja.org/sr-Latn-RS/biblioteka/r/Zbirka2/max_zbir_puta_kroz_matricu
                                                     // red i kolona
int najzbir(const vector<vector<int>>&mat, int n, int r, int k) {
    if ( r == 0 && k == 0 ) // kraj, BC
        return mat[0][0];
    // nije kraj...
    int gore = 0, levo = 0; // 2 mogucnosti
    if ( r > 0 ) // moze gore?
        gore = mat[r][k] + najzbir(mat, n, r-1, k);
    if ( k > 0 ) // moze levo?
        levo = mat[r][k] + najzbir(mat, n, r, k-1);
    if (r == 0) // ne moze gore!
        return levo;
    if (k == 0) // ne moze levo!
        return gore;
    return max( levo, gore ); }

int main() {
    int n; cin >> n;
    vector<vector<int>>mat(n);
    for (int i = 0; i < n; i++) {
        mat[i].resize(n);
        for (int j = 0; j < n; j++) cin >> mat[i][j]; }
                         // pocetak rekurzije
    cout << najzbir(mat, n, n-1, n-1); }