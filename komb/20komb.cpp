#include <bits/stdc++.h>
using namespace std;
// sled.var.

void ispis(const vector<int>&k) {
     for ( auto kk : k )
          cout << kk << ' ';
     cout << '\n'; }

void kombbp(vector<int>&komb, int i, int n) {
     int k = komb.size();
     if ( i == k) { // ispis je na k-tom nivou
          ispis(komb);
          return; }
     // pocetak i kraj?
     int pocetak, kraj;
     if ( i == 0) // za prazan skup
          pocetak = 1;
     else // zadnji + 1
          pocetak = komb[i-1] + 1;
     kraj = n - ( k - i - 1); // n - k + i + 1

     for ( int kk = pocetak; kk <= kraj; kk++ ) {
          komb[i] = kk;
          kombbp(komb, i+1, n);
     }
}

int main() {
     int n, k; cin >> k >> n; // prvi k, onda n
     vector<int>komb(k);
     
     kombbp(komb, 0, n); // i = 0
     
     }