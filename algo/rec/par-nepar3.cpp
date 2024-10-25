#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
// Функција пар-непар
// https://petlja.org/sr-Latn-RS/biblioteka/r/Zbirka2/funkcija_par_nepar
// samo sabiranje
ull f( ull n ) {
    if (n == 1) return 1;
    ull n2 = n / 2;
    if ( n2 + n2 == n ) // par?
        return f( n2 );
        
    // nepar?
    return f( n2 ) + f( n2 + 1 );
    
}

int main() {
    ull n; cin >> n; 
    cout << f(n);
    return 0; }

