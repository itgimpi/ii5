#include <bits/stdc++.h>
using namespace std;
// Жаба на камењу

int zaba(const vector<int>&kamenje, int r) {
     int n = kamenje.size();
     int res = 0; // br skokova je na pocetku nula
     int trenutni = 0; // indeks trenutne pozicije zabe

     while ( trenutni < n-1 ) { // skokovi do predzadnjeg kamena
          // od zadnjeg kamena nema vise skokova
          // odredi indeks sledeceg kamena
          int sledeci = trenutni;  // sledeci je na pocetku i trenutni

          // sve dok...
          // je skok na sledeci kamen moguc...
          // i ne predje se predzadnji...
          while ( kamenje[sledeci+1] - kamenje[trenutni] <= r && sledeci < n-1 )
               sledeci++; // idi na sledeci

          // ako je skok nemoguc...     
          if ( trenutni == sledeci ) return -1;
          // nova pozicija zabe je pozicija naj. skoka
          trenutni = sledeci;
          res++; // +1 skok
     }

     return res;
}

int main() {
     int n; cin >> n; // br. kamena
     vector<int>kamenje(n); // pozicije, rastuce
     for (int i = 0; i < n; i++) cin >> kamenje[i];
     int r; cin >> r; // najveci moguci skok
     cout << zaba(kamenje, r);    
     }