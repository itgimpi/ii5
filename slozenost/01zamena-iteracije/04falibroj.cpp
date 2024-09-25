#include <bits/stdc++.h>
using namespace std;
// Недостајући број
// https://petlja.org/sr-Latn-RS/biblioteka/r/Zbirka2/nedostajuci_broj
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false); // iskljuci sinhro.
    cin.tie(0); // false is 0

    int n; cin >> n;
    ll zbir = 0; // zbir brojeva gde 1 fali

    for (int i = 0; i < n; i++) {
        int br; cin >> br;
        zbir += br; }

    ll nefali = (ll) n * (ll) (n+1) / 2; // zbir brojeva sa brojem koji fali
    cout << nefali - zbir;
        
    }



