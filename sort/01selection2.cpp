#include <bits/stdc++.h>
using namespace std;
// Improved Selection Sort

void ssort(vector<int>&a) {
     int n = a.size();
     
     for ( int i = 0; i < n - 1; i++ ) {
          int inaj = i; // indeks najmanjeg
          for ( int j = i + 1; j < n; j++ )
               if ( a[inaj] > a[j] ) // ako el. nije na mestu...
                    inaj = j;
          swap(a[i], a[inaj]);

} }

int main() {
     vector<int>a = {123, 23, 1, 45, 12, 7, 43, 8};
     ssort(a);
     //for (int i = 0; i < n; i++)
     for ( auto el : a ) cout << el << ' ';
     }