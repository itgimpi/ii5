#include <bits/stdc++.h>
using namespace std;
/*Sa ulaza se učitava n datuma. Odredi najkasniji od njih.*/

tuple<int,int,int> unos() {
    int d, m, g; cin >> d >> m >> g;
    return make_tuple(g, m, d); }

void ispis(const tuple<int, int, int>& datum) {
    cout << get<2>(datum) << " " << 
    get<1>(datum) << " " << 
    get<0>(datum) << endl; }

int main() {
    int n; cin >> n;
    tuple<int, int, int> max_datum = unos();
    for (int i = 1; i < n; i++) {
        tuple<int, int, int> datum = unos();
        if (datum > max_datum) // poređenje
            max_datum = datum; }
    ispis(max_datum);
    return 0; }
