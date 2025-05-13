#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    vector<pair<double, int>> slatkisi(n);

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b; //unose se gramaza proizvoda i njegova cena
        double c = (double)b/a;
        slatkisi[i] = {c, a};
    }


    sort(slatkisi.rbegin(), slatkisi.rend());


    int ranac; cin >> ranac; //nosivost ranca
    double res = 0.0; //konacno resenje

    for (int i = 0; i < n && ranac > 0; i++) {
        double vrednost = slatkisi[i].first; 
        int kol = slatkisi[i].second;

        int uzimamo = min(ranac, kol);
        res += uzimamo * vrednost; // u resenje se dodaje manji od kolicine i nosivosti ranca pomnozoeno sa vrednost
        ranac -= uzimamo; // nosivost ranca se samnjuje
    }

    cout << fixed << setprecision(2) << res;

    return 0;
}