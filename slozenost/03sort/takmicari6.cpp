#include <bits/stdc++.h>
using namespace std;
// https://petlja.org/sr-Latn-RS/biblioteka/r/Zbirka2/sortiranje_takmicara
// torke, mogu da imaju vise od dva svojstva,
// sort je po svojstvu 1, svojstvu 2, svojstvu 3, svojstvu 4, ...
// sort po poenima , naopako 

int main() {
    ios_base::sync_with_stdio(false); // iskljuci sinhro.

    int n; cin >> n;
    vector<tuple<int, string>>a(n);
    for (int i = 0; i < n; i++)  {
    //cin >> a[i].ime >> a[i].poeni;
        string ime; cin >> ime;
        int poeni; cin >> poeni;
        a[i] = make_tuple(-poeni, ime); } // TRIK
        //a[i] = {poeni, ime};        }

    sort( a.begin(), a.end() );

    for (int i = 0; i < n; i++) cout << get<1>(a[i]) << ' ' << -get<0>(a[i]) << '\n';    
    }



