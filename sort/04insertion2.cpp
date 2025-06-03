#include <bits/stdc++.h>
using namespace std;
// Improved Selection Sort

void isort(vector<int>&a) {
     int n = a.size();
     // za sve elemente od drugog...
     for ( int i = 1; i < n; i++ ) {
          int tmp = a[i];
          int j;
          // sve dok je el. na poz. j manji od el. na poz. j-1(levo od njega)
          for ( j = i-1; j >= 0 && a[j] > tmp; j-- )
               a[j+1] = a[j];
          a[j+1] = tmp;
     }
     

}

int main() {
     vector<int>a = {123, 23, 1, 45, 12, 7, 43, 8};
     isort(a);
     //for (int i = 0; i < n; i++)
     for ( auto el : a ) cout << el << ' ';
}