#include <bits/stdc++.h>
using namespace std;

void ispis(const vector<int>&v) {
     int k = v.size();
     for (int i = 0; i < k; i++)
          cout << v[i] << ' ';
     cout << '\n';
}

void vsp(vector<int>&v, int n, int k){
     if ( k == 0 )
          ispis(v);
     else
          for ( int nn = 1; nn <= n; nn++ ) { // prosirenje nekog stanja
               v[v.size()-k] = nn;
               vsp(v, n, k-1);       } }

int main() {
     int n, k; cin >> n >> k;
     vector<int>v(k);
     vsp(v, n, k); // n = 3, k = 4
     
     }