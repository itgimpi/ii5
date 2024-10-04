#include <bits/stdc++.h>
using namespace std;
// sort with dynamic array with unnamed function
// O(n log n)

// bool f(int a, int b) { return a < b; }  <-- ima ime

int main() {
    ios_base::sync_with_stdio(false); // iskljuci sinhro.

    int n; cin >> n;
    vector<int>a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

      // +-------- prvi el. niza
    //   |
    //   V          prvi posle zadnjeg
    sort(a.begin(), a.end(), [] (int a, int b) { return a < b; }); // <- nema ime



    for (int i = 0; i < n; i++) cout << a[i] << ' ';    
    }



