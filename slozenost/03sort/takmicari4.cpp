#include <bits/stdc++.h>
using namespace std;
// https://petlja.org/sr-Latn-RS/biblioteka/r/Zbirka2/sortiranje_takmicara
// parovi
// sort po poenima ali od manjih ka vecim

int main() {
    ios_base::sync_with_stdio(false); // iskljuci sinhro.

    int n; cin >> n;
    vector<pair<int, string>>a(n); // prvo poeni onda ime
    for (int i = 0; i < n; i++)  {
        string ime; cin >> ime;
        int poeni; cin >> poeni;
        a[i] = {poeni, ime};        }

    sort( a.begin(), a.end() );

    for (int i = 0; i < n; i++) cout << a[i].second << ' ' << a[i].first << '\n';    
    }



