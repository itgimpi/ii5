#include <bits/stdc++.h>
using namespace std;
// sort naopako
// O(n log n)

bool f(int a, int b) { return a > b; }  

int main() {
    ios_base::sync_with_stdio(false); // iskljuci sinhro.

    int n; cin >> n;
    vector<int>a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end(), f);



    for (int i = 0; i < n; i++) cout << a[i] << ' ';    
    }



