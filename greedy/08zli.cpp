#include <bits/stdc++.h>
using namespace std;
// Зли учитељ

int main() {
     int n; cin >> n; 
     vector<int>a(n);
     for (int i = 0; i < n; i++) cin >> a[i];
     sort(a.begin(), a.end());

     int res = 0;

     for ( int i = 0; i < n / 2; i++ )
          res =max( res, a[i] + a[n-1-i] );
     
     cout << res - 1;
     }