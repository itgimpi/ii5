#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<double, int>> slatkisi(n);
    for (int i = 0; i < n; i++) {
        int tez, vred;
        cin >> tez >> vred;
        double cenaPoGramu = (double)vred / tez;
        slatkisi[i] = {cenaPoGramu, tez};
    }

    int kapacitet;
    cin >> kapacitet;

    sort(slatkisi.rbegin(), slatkisi.rend());

    double ukupnaVrednost = 0.0;
    for (int i = 0; i < n && kapacitet > 0; i++) {
        double cena = slatkisi[i].first;
        int kolicina = slatkisi[i].second;

        int uzimamo = min(kapacitet, kolicina);
        ukupnaVrednost += uzimamo * cena;
        kapacitet -= uzimamo;
    }

    cout << fixed << setprecision(2) << ukupnaVrednost << endl;
    return 0;
}