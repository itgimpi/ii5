#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
// Мали поштар 2

int main() {
    int n; cin >> n; // iznos
    vector<int>a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    sort( begin(a), end(a) );

    int res = 0;
    for (int i = 0; i < n/2; i++) {
        res += a[n - 1 - i];
        res -= a[i]; }

    cout << res * 2; }