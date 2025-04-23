#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
// Минимална сума два броја формирана од датих цифара

int main() {
    int n; cin >> n;
    vector<int>a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    if ( n % 2 == 1 ) { // neparan br. cifara?
        a.resize(n+1);
        a[n] = 0; // dodaj nulu
    }

    sort( begin(a), end(a) );
    ll stepen10 = 1;
    ll vrednost = 0;

    for (int i = a.size()-2; i >= 0; i -= 2) {
        vrednost += (a[i] + a[i+1]) * stepen10;
        stepen10 *= 10;
    }
    cout << vrednost;




}