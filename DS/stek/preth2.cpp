#include <bits/stdc++.h>
using namespace std;
int najpreth(const vector<int>&a, int k) {// vraća poziciju najbližeg većeg prethodnika elementa a[k],
    if (k == 0) //  tj. -1 ako a[k] nema većih prethodnika
        return -1; // prvi element nema prethodnika
    int p = k-1; // pretraga od prethodnika k-tog elementa
    while (p != -1 && a[p] <= a[k]) // dok je prethodnik unutar niza, ali nije veći od k-tog
        p = najpreth(a, p);  // analiza njegovog prethodnika
    // petlja se završava kad je p=-1, nema većeg prethodnika
    // ili kada je a[p] > a[k], onda je a[p] najbliži veći prethodnik elementu a[k]
    return p; }
int main() {
    vector<int>a{3, 7, 4, 2, 6, 5};
    for (int k = 0; k < a.size(); k++) {
        int p = najpreth(a, k);  // nalazi poziciju najbližeg većeg prethodnika
        if (p != -1)   // ispisuje njegovu vrednost ili -, ako ne postoji
            cout << a[p] << endl;
        else
            cout << "-" << endl; }
    return 0; }
