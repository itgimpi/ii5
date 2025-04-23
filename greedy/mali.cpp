#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
// Мали поштар

int main() {
    int n; cin >> n; // iznos
    vector<int>a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    sort( begin(a), end(a) );

    int res = 0;
    int l = 0, d = n - 1;
    bool par = true;

    while ( l < d ) {
        res += abs(a[d] - a[l]);
        if ( par ) 
            l++;
        else
            d--;
        par = !par;
    }
    res += abs(a[l]-a[0]);

    cout << res;



}