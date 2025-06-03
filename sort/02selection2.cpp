#include <bits/stdc++.h>
using namespace std;
// Improved Selection Sort

void ssort(vector<int>&a) {
     int n = a.size();
     
     for ( int i = 0; i < n - 1; i++ ) {
          int inaj = i; // indeks najmanjeg je na pocetku i
          for ( int j = i + 1; j < n; j++ )
               if ( a[inaj] > a[j] ) // ako je j-ti manji od do sada najmanjeg...
                    inaj = j; // zapamti mu indeks
          swap(a[i], a[inaj]); // na i-to mesto dolazi najmanji el.

} }

int main() {
     vector<int>a = {123, 23, 1, 45, 12, 7, 43, 8};
     ssort(a);
     //for (int i = 0; i < n; i++)
     for ( auto el : a ) cout << el << ' ';
     }