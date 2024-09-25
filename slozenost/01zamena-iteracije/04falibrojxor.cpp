#include <bits/stdc++.h>
using namespace std;
// Недостајући број
// https://petlja.org/sr-Latn-RS/biblioteka/r/Zbirka2/nedostajuci_broj
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false); // iskljuci sinhro.
    cin.tie(0); // false is 0

    int n; cin >> n;

    int fali = 0;
    for (int i = 0; i < n; i++) {
        int br; cin >> br;
        fali ^= br; }

    for ( int i = 1; i <= n; i++ )
        fali ^= i;

    cout << fali;

        
    }



