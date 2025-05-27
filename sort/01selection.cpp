#include <bits/stdc++.h>
using namespace std;
// Selection Sort

void ssort(vector<int>&a) {
     int n = a.size();
     // za svaku poziciju od prve do predzadnje... (od 0 do n-2)
     for ( int i = 0; i < n - 1; i++ ) 
          // kreni od sledece
          for ( int j = i + 1; j < n; j++ )
               if ( a[i] > a[j] ) // ako el. nije na mestu...
                    swap(a[i], a[j]); // zamena

}

int main() {
     vector<int>a = {123, 23, 1, 45, 12, 7, 43, 8};
     ssort(a);
     //for (int i = 0; i < n; i++)
     for ( auto el : a ) cout << el << ' ';
     }