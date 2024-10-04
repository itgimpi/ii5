#include <bits/stdc++.h>
using namespace std;
// https://petlja.org/sr-Latn-RS/biblioteka/r/Zbirka2/binarna_pretraga
// Binary Search Solution O(nq)

// binarna pretraga - iterativno resenje, O ((n+q) log n)
bool binarna(const vector<int>&a, int x) {
    int n = a.size();
    int l = 0; // leva i
    int d = n-1; // desna granica pretrage
    while ( l <= d ) {  // BC
        //int sr = ( l + d ) / 2; // sredina intervala
        int sr = l + ( d - l ) / 2; // sredina intervala
        if ( x < a[sr] ) // x je manji od srednjeg...
            d = sr - 1;
        else if ( x > a[sr] ) // veci?
            l = sr + 1;
        else // x == a[sr], pronadjen!
            return true;
    }
    return false;  }

int main() {
    ios_base::sync_with_stdio(false); // iskljuci sinhro.

    int n; cin >> n;
    vector<int>a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(begin(a), end(a));

    int res = 0;
    int x;
    while ( cin >> x ) {
        // if ( binary_search(a.begin(),a.end(),x) ) // da li x pripada nizu a?
        if ( binarna(a, x) ) // da li x pripada nizu a?
            res++;
    }
    cout << res;

    }



