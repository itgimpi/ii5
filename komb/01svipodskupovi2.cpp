#include <bits/stdc++.h>
using namespace std;
// svi podskupovi - leksikografski - rec

void ispis(const vector<int>&p, int k) {
     for (int i = 0; i < k; i++)
          cout << p[i] << ' ';
     cout << '\n'; }

void podskupovi(vector<int>&s, int n, int k) {
     // prvi poziv (s, n, 0), k=0, ispis prazan skup, samo enter
     ispis(s, k);
     // svaki podskup treba da se prosiri
     // 1. prosirenje (prazan skup) sa 0, 1, 2, ...
     // niz treba da bude leks. rastuci
     // treba da se odredi pocetak i kraj prosirenja
     int pocetak;
     if ( k == 0 ) // empty set?
          pocetak = 0; // prosiri sa 0, 1, ..., n-1
     else // nije prazan?
          // pocetak je zadnji element + 1
          // jer ne sme da bude duplikata
          pocetak = s[k-1] + 1;
     // trenutni podskup prosiri elementima od poc. do kraja (n-1)
     for (int i = pocetak; i < n; i++) {
          s[k] = i; // na sledecu poziciju upisi element
          podskupovi( s, n, k+1 ); // rekurzivni poziv f-je, sa k+1 el.
     }
}

int main() {
     int n; cin >> n; // br. elem.
     vector<int>s(n); 

     podskupovi(s, n, 0); }