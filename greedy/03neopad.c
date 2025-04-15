#include <bits/stdc++.h>
using namespace std;
// Неопадајућа растојања суседних елемената

int main() {
     int n; cin >> n; 
     vector<int>a(n);
     for (int i = 0; i < n; i++) cin >> a[i];

     sort(a.begin(), a.end());
     vector<int>res(n); // dodatni niz
     int l = 0, d = n - 1; // prvi i zadnji u sortiranom
     int br = n-1; // zadnji u resenju

     while ( l < d ) {
          res[br--] = a[d--];
          res[br--] = a[l++]; }
     if ( n % 2 == 1 ) res[br] = a[l];
     for (int i = 0; i < n; i++) cout << res[i] << ' ';
     }