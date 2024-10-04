#include <bits/stdc++.h>
using namespace std;
// https://petlja.org/sr-Latn-RS/biblioteka/r/Zbirka2/sortiranje_takmicara
// lambda, bez imena f-je
struct takmicar {
    string ime;
    int poeni; };

int main() {
    ios_base::sync_with_stdio(false); // iskljuci sinhro.

    int n; cin >> n;
    vector<takmicar>a(n);
    for (int i = 0; i < n; i++) cin >> a[i].ime >> a[i].poeni;

    sort( a.begin(), a.end(), []( takmicar a, takmicar b) {
        if ( a.poeni > b.poeni ) return true; // OK
        if ( a.poeni < b.poeni ) return false; // NOK
        return a.ime <= b.ime; }  
     );

    for (int i = 0; i < n; i++) cout << a[i].ime << ' ' << a[i].poeni << '\n';    
    }



