#include <bits/stdc++.h>
using namespace std;
// Bankomat
const int INF = 100000;

int resi(const vector<int> &nov, int iznos) {
    // napravljen tacan iznos ili je prekoracen
    if ( iznos < 0 ) return INF;
    if ( iznos == 0 ) return 0;
    // nije napravljen iznos...
    int res = INF; // recimo da nema resenja
    for ( auto n : nov ) // za svaki moguci novcic...
        res = min( res, resi(nov, iznos - n) + 1);
    return res;
}

int main() {
    int iznos; cin >> iznos;
    int n; cin >> n;
    vector<int>nov(n);
    for (int i = 0; i < n; i++)
        cin >> nov[i];
    int brn = resi(nov, iznos);
    if ( brn == INF ) cout << -1;
    else cout << brn;
     }