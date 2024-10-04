#include <bits/stdc++.h>
using namespace std;
// https://petlja.org/sr-Latn-RS/biblioteka/r/Zbirka2/sortiranje_takmicara
// parovi
// sort po poenima , naopako 

int main() {
    ios_base::sync_with_stdio(false); // iskljuci sinhro.

    int n; cin >> n;
    vector<pair<int, string>>a(n);
    for (int i = 0; i < n; i++)  {
    //cin >> a[i].ime >> a[i].poeni;
        string ime; cin >> ime;
        int poeni; cin >> poeni;
        a[i] = make_pair(-poeni, ime); } // TRIK
        //a[i] = {poeni, ime};        }

    sort( a.begin(), a.end() );

    for (int i = 0; i < n; i++) cout << a[i].second << ' ' << -a[i].first << '\n';    
    }



