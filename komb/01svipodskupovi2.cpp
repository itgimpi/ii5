#include <bits/stdc++.h>
using namespace std;
// svi podskupovi - leksikografski

void ispis(const vector<int>&p, int j) {
     for (int i = 0; i < j; i++)
          cout << p[i] << ' ';
     cout << '\n'; }

void podskupovi(vector<int>&s, int n, int k) {
     ispis(s, k);
     // 1. prosirenje sa 0, 1, 2, ...
     // niz treba da bude leks. rastuci
     int pocetak;
     if ( k == 0 ) // empty set?
          pocetak = 0;
     else
          pocetak = s[k-1] + 1;
     
     for (int i = pocetak; i < n; i++) {
          s[k] = i;
          podskupovi( s, n, k+1 );
     }


}

int main() {
     int n; cin >> n;
     vector<int>s(n);
     vector<int>p(n);
     podskupovi(s, n, 0);

     }