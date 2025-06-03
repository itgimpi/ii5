#include <bits/stdc++.h>
using namespace std;
// Selection Sort

void isort(vector<int>&a) {
     int n = a.size();
     // za sve elemente od drugog do zadnjeg...
     for ( int i = 1; i < n; i++ ) {
          // ide se od i do...
          // sve dok je el. na poz. j manji od el. na poz. j-1 (levo od njega)
          for ( int j = i; j > 0 && a[j] < a[j-1]; j-- )
               swap(a[j], a[j-1]); // zameni ih
     }
     

}

int main() {
     vector<int>a = {123, 23, 1, 45, 12, 7, 43, 8};
     isort(a);
     //for (int i = 0; i < n; i++)
     for ( auto el : a ) cout << el << ' ';
}