#include <bits/stdc++.h>
using namespace std;
// https://petlja.org/sr-Latn-RS/biblioteka/r/Zbirka2/binarna_pretraga
// Table Solution O(n + q)

// O (n+q)


int main() {
    ios_base::sync_with_stdio(false); // iskljuci sinhro.

    int n; cin >> n;
    vector<bool>a(n+1, false);
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        a[x] = true;
    }
    

    int res = 0;
    int x;
    while ( cin >> x ) {
        if ( a[x] ) // 
            res++;
    }
    cout << res;

    }



