#include <bits/stdc++.h>
using namespace std;
// 

void bubsort(vector<int>&a) {
     int n = a.size();

     for (int i = 0; i <= n-2; i++) {
          for (int j = 0; j < n - i - 1; j++)
               if (a[j] > a[j+1]) {
                    swap(a[j], a[j+1]);
               }
     }
}

int main() {
     vector<int>a = {123, 23, 1, 45, 12, 7, 43, 8};
     bubsort(a);
     //for (int i = 0; i < n; i++) ...
     for ( auto el : a ) cout << el << ' ';
}