#include <bits/stdc++.h>
using namespace std;
// Ментори

int main() {
     int n; cin >> n; 
     vector<int>rejting(n);
     for (int i = 0; i < n; i++) cin >> rejting[i];
     sort(rejting.begin(), rejting.end());

     int res = 0;
     int djak = 0, mentor = 1; // mentor i djak

     while ( mentor < n ) {
          if ( 2 * rejting[djak] <= rejting[mentor] ) { // moze?
               djak++;
               mentor++;
               res++; }
          else {
               mentor++;
          } }
     
     cout << res;
     }