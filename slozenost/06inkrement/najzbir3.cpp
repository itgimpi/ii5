#include <bits/stdc++.h>
using namespace std;
//https://petlja.org/sr-Latn-RS/biblioteka/r/Zbirka2/prefiks_najveceg_zbira
// Inkrementalnost, Vreme O(n), Mem O(1)

int main() {
    ios_base::sync_with_stdio(false); // iskljuci sinhro.
    int n; cin >> n;

    int najzbir = 0; // najveci
    int zbir = 0;  // trenutni zbir
    for ( int i = 0; i < n; i++ ) {
        int el; cin >> el;
        zbir += el;
        if ( zbir > najzbir )
            najzbir = zbir; }

    cout << najzbir;


    }



