#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
// Минимална сума два броја формирана од датих цифара

int main() {
    int n; cin >> n; // iznos
    vector<int>a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    if (n % 2 == 1) {
        a.resize(n+1);
        a[n] = 0;
    }

    sort( begin(a), end(a) );

    ll deset = 1;
    ll res = 0;

    for ( int i = a.size()-2; i >= 0; i-= 2 ) {
        res += ( a[i] + a[i+1] ) * deset;
        deset *= 10;
    }

    cout << res;



}