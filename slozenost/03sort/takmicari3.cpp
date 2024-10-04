#include <bits/stdc++.h>
using namespace std;
// https://petlja.org/sr-Latn-RS/biblioteka/r/Zbirka2/sortiranje_takmicara
// parovi, sort je po prvom, onda po drugom
// sort po imenima

int main() {
    ios_base::sync_with_stdio(false); // iskljuci sinhro.

    int n; cin >> n;
    vector<pair<string, int>>a(n); // par string + int
    for (int i = 0; i < n; i++)  {
        string ime; cin >> ime;
        int poeni; cin >> poeni;
        a[i] = make_pair(ime, poeni); }

    sort( a.begin(), a.end() );

    for (int i = 0; i < n; i++) cout << a[i].first << ' ' << a[i].second << '\n';         }



