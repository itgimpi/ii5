#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
// Функција пар-непар
// https://petlja.org/sr-Latn-RS/biblioteka/r/Zbirka2/funkcija_par_nepar
// samo sabiranje
ull f( ull n ) {
    if (n == 1) return 1;
    if ( n & 1 ) // nepar?
        return f( n >> 1 ) + f( n >> 1 + 1 );
    // par?
    return f( n >> 1 );
}

int main() {
    ull n; cin >> n; 
    cout << f(n);
    return 0; }

