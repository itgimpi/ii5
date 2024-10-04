#include <bits/stdc++.h>
using namespace std;
// https://petlja.org/sr-Latn-RS/biblioteka/r/Zbirka2/sortiranje_takmicara

struct takmicar {
    string ime;
    int poeni; };

bool poredi( takmicar a, takmicar b) {
    if ( a.poeni > b.poeni ) return true; // OK
    //else
    if ( a.poeni < b.poeni ) return false; // NOK
    //if ( a.poeni == b.poeni )
    // br. poena je isti...
    // if ( a.ime <= b.ime ) return true;
    // else return false;
    return a.ime <= b.ime;

}

int main() {
    ios_base::sync_with_stdio(false); // iskljuci sinhro.

    int n; cin >> n;
    vector<takmicar>a(n);
    for (int i = 0; i < n; i++) cin >> a[i].ime >> a[i].poeni;

    sort( a.begin(), a.end(), poredi );

    for (int i = 0; i < n; i++) cout << a[i].ime << ' ' << a[i].poeni << '\n';    
    }



