#include <bits/stdc++.h>
using namespace std;

void ispis(const vector<string>&v) {
     for ( auto vv : v ) 
          cout << vv << endl;
}

int plocice(int k, int i, vector<string>&p) {
     //BC
     if ( i == k ) {
          ispis(p);
          cout << endl;
          return 1; // za br. nacina
     }
     else {
          int brn = 0; // br. nacina
          // uspravno na poz. i
          p[0][i] = '|';
          p[1][i] = '|';
          brn += plocice(k, i+1, p);
          // polozeno?
          if ( i < k-1 ) {
               p[0][i] = '-'; p[0][i+1] = '-';
               p[1][i] = '-'; p[1][i+1] = '-';
               brn += plocice(k, i + 2, p );
          }
     return brn;
     }
}

int main() {
     int k; cin >> k;
     vector<string>p(2, string(k, ' '));
     cout << plocice(k, 0, p);
     
     }