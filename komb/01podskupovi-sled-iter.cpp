#include <bits/stdc++.h>
using namespace std;
// svi podskupovi - leksikografski - iterativno
// 1, 2, ..., n
          // vraca se sl. psk      // k -> k+1 / k-1
bool slpod(vector<int>&psk, int n, int &k) { // f-ja vrati T ili F
     if ( k == 0 ) { // empty set?
          psk[k++] = 1;
          return true; }
     if ( psk[k-1] < n ) { // prosirenje, zadnji nije n?
          psk[k] = psk[k-1] + 1;
          k++;
          return true; }
     // zadnji el. je n
     k--; // skrati psk, br. el. --
     // {n} nema sledbenika?
     if ( k == 0 ) 
          return false;
     // skracivanje
     psk[k-1]++; // bivsi predzadnji, sada zadnji
     return true; }

int main() {
     int n; cin >> n;
     vector<int>podskup(n);
     int el;
     int k = 0;
     // unos proizvoljnog broja elemenata
     while ( cin >> el ) {
          podskup[k] = el; // k++
          k++; }

     if (slpod(podskup, n, k)) // da li sl. podskup postoji?
          for ( int i = 0; i < k; i++ )
               cout << podskup[i] << ' ';
     else 
          cout << '-' << '\n'; }