#include <bits/stdc++.h>
using namespace std;
// https://petlja.org/sr-Latn-RS/biblioteka/r/Zbirka2/broj_parova_datog_zbira2
// Two Pointers Solution O(n log n), zbog sort-a



int main() {
    ios_base::sync_with_stdio(false); // iskljuci sinhro.
    int s; cin >> s;
    int n; cin >> n;
    vector<int>a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(begin(a), end(a));

    int res = 0;
    int l = 0, d = n-1;
    while ( l < d ) {
        if ( a[l] + a[d] > s ) // zbir je veci
            d--;
        else if ( a[l] + a[d] < s )
            l++;
        else // if ( a[l] + a[d] == s )
            {
                l++;
                d--;
                res++;
            }
    }

    cout << res;

    }



