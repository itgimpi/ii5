#include <bits/stdc++.h>
using namespace std;
//https://petlja.org/sr-Latn-RS/biblioteka/r/Zbirka2/prefiks_najveceg_zbira
// Inkrementalnost, Vreme O(n), Mem O(1)

int main() {
    ios_base::sync_with_stdio(false); // iskljuci sinhro.
    int n; cin >> n;

    int el; cin >> el;
    int naj = el; // najveci

    for ( int i = 1; i < n; i++ ) {
        int el; cin >> el;
        if ( el > naj )
            naj = el; }

    cout << naj;


    }



