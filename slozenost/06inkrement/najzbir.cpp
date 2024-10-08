#include <bits/stdc++.h>
using namespace std;
//https://petlja.org/sr-Latn-RS/biblioteka/r/Zbirka2/prefiks_najveceg_zbira
// naive solution, vre O(nn), mem O(n)

int main() {
    ios_base::sync_with_stdio(false); // iskljuci sinhro.
    int n; cin >> n;
    vector<int>a(n);
    for (int i = 0; i < n; i++) 
        cin >> a[i];

    int najzbir = 0;
    for ( int i = 0; i < n; i++ ) {
        int zbir = 0;
        for ( int j = 0; j <= i; j++ )
            zbir += a[j]; // ponavljanja
        if ( zbir > najzbir )
            najzbir = zbir;     }

    cout << najzbir;


    }



