#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
// Функција пар-непар
// https://petlja.org/sr-Latn-RS/biblioteka/r/Zbirka2/funkcija_par_nepar
// 2 deljenja
ull f( ull n ) {
    if (n == 1) return 1; // BC
    if ( n % 2 == 0 ) // par?
        return f( n / 2 );
    // nepar?
    return f( n / 2 ) + f( n / 2 + 1 );
}

int main() {
    ull n; cin >> n; 
    cout << f(n);
    return 0; }

