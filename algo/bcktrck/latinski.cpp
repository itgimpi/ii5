#include <bits/stdc++.h>
using namespace std;
// Латински квадрати
// https://petlja.org/sr-Latn-RS/biblioteka/r/Zbirka2/latinski_kvadrati

bool konflikt(vector<vector<int>>&mat, int n, int r, int k) {
    for (int rr = 0; rr < n; rr++) // da li je u koloni k?
        // bez slucaja rr = r (isto polje)
        if ( rr!=r && mat[r][k] == mat[rr][k] )
            return true;
    for (int kk = 0; kk < n; kk++) // da li je u redu r?
        if ( kk!=k && mat[r][k] == mat[r][kk] )
            return true;
    return false; } // nema konflikta...

void latinski(vector<vector<int>>&mat, int n, int rb) {
    int red = rb / n; // odredi red preko rb
    int kol = rb % n; // odredi kolonu preko rb
    // da li je polje sa tim rb popunjeno?
    if ( mat[red][kol] != 0 ) {
        // kraj?
        if ( rb == n * n - 1 ) { // zadnje polje
            for (int i = 0; i < n; i++) { // ispis resenja
                for(int j = 0; j < n; j++) 
                    cout << mat[i][j];
                cout << '\n'; } // predji u novi red za isto resenje
            cout << '\n'; } // za novo resenje
        else { // polje je popunjeno, nije kraj...
            latinski(mat, n, rb+1);  } // radi sledeci rb...
    }
    // nije popunjeno...
    else {
        // treba da se popuni
        for (int vr = 1; vr <= n; vr++) { // probaj sve moguce vrednosti od 1 do n
            mat[red][kol] = vr;
            if (!konflikt(mat, n, red, kol)) // nema konf.
                latinski(mat, n, rb);  } }
        mat[red][kol] = 0; } // oslobodi polje...

int main() {
    int n; cin >> n; // dimenzija
    vector<vector<int>>mat(n); // moglo je i C matrica
    for (int i = 0; i < n; i++) {
        mat[i].resize(n);
        //string s; getline(cin, s);
        string s; cin >> s;
        for (int j = 0; j < n; j++)
            mat[i][j] = s[j]-'0';  } // za 1 je to 49-48=1
    latinski(mat, n, 0); // rb = 0

    return 0;
}