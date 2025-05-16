#include <bits/stdc++.h>
using namespace std;
// sled.var.

void ispis(const vector<int>&v) {
     for ( auto vv : v )
          cout << vv << ' ';
     cout << '\n'; }

bool slvar(vector<int>&v, int n) {
     int k = v.size();
     int i;
     // kraci kod
     for ( i = k-1; i >= 0 && v[i] == n; i-- )
          v[i] = 1;

     if (i < 0) return false;
     v[i]++;
     return true; }

int main() {
     int n, k; cin >> k >> n; // prvi k, onda n
     vector<int>v(k);
     for ( int i = 0; i < k; i++ )
          cin >> v[i];
     
     if ( slvar(v, n) ) // ako postoji
          ispis(v); // ispis
     else
          cout << '-';
     
     }