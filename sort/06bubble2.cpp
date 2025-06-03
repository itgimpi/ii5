#include <bits/stdc++.h>
using namespace std;
// Improved Bubble Sort

void bsort(vector<int>&a) {
     int n = a.size();
     bool promene;
     
     for ( int i = 0; i < n-1; i++ ) {
          promene = false; // na pocetku svake iteracije nije bilo promena
          for ( int j = 0; j < n - i - 1; j++ ) {
               if ( a[j] > a[j+1] ) {
                    swap( a[j], a[j+1] );
                    promene = true; } }
          if (!promene) break;
     }

     

}

int main() {
     vector<int>a = {123, 23, 1, 45, 12, 7, 43, 8};
     bsort(a);
     //for (int i = 0; i < n; i++)
     for ( auto el : a ) cout << el << ' ';
}