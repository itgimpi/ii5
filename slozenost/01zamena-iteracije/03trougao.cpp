#include <bits/stdc++.h>
using namespace std;
// Аритметички троугао
// https://petlja.org/sr-Latn-RS/biblioteka/r/Zbirka2/aritmeticki_trougao1
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false); // iskljuci sinhro.
    cin.tie(0); // false is 0

    int n, a, d;
    cin >> n; 

    while ( cin >> a >> d ) {
        ll uk = (ll) n * (ll) ( 2 * a + ( n - 1 ) * d ) / 2; // Sn aritm. niza
        double uk2 = uk / 1000.0;
        cout << fixed << setprecision(2) << showpoint << uk2 << '\n';
    }



}