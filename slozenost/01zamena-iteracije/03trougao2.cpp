#include <bits/stdc++.h>
using namespace std;
// Аритметички троугао
// https://petlja.org/sr-Latn-RS/biblioteka/r/Zbirka2/aritmeticki_trougao1
typedef long long ll;

ll gaus( ll n ) { // zbir brojeva od 1 do n
    return n * ( n + 1 ) / 2;
}

int main() {
    ios_base::sync_with_stdio(false); // iskljuci sinhro.
    cin.tie(0); // false is 0
    // query - upit
    ll q, k; cin >> q;

    while ( q-- ) { // for int i 0...
        cin >> k;
        cout << ( 2 * k - 1 ) * ( ( k - 1 ) * ( k - 1 ) + 1 + k * k ) / 2 << '\n';
        
    }



}