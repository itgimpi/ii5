#include <bits/stdc++.h>
using namespace std;
// sort with dynamic array
// O(n log n)

//bool f(int a, int b) { return a < b; }  

int main() {
    ios_base::sync_with_stdio(false); // iskljuci sinhro.

    int n; cin >> n;
    vector<int>a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

      // +-------- prvi el. niza
    //   |
    //   V          prvi posle zadnjeg
    sort(a.begin(), a.end());



    for (int i = 0; i < n; i++) cout << a[i] << ' ';    
    }



