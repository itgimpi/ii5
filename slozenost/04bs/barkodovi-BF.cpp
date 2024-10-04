#include <bits/stdc++.h>
using namespace std;
// https://petlja.org/sr-Latn-RS/biblioteka/r/Zbirka2/binarna_pretraga
// Linear Search Solution O(nq)

bool linearna(const vector<int>&a, int x) {
    for ( int i = 0; i < a.size(); i++ )
        if ( a[i] == x ) // poklapanje?
            return true;
    // nije bilo poklapanja...
    return false; }

int main() {
    ios_base::sync_with_stdio(false); // iskljuci sinhro.

    int n; cin >> n;
    vector<int>a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int res = 0;
    int x;
    while ( cin >> x ) {
        if ( linearna(a, x) ) // da li x pripada nizu a?
            res++;
    }
    cout << res;

    }



