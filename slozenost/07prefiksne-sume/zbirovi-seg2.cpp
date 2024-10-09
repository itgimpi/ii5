#include <bits/stdc++.h>
using namespace std;
// Збирови сегмената
// https://petlja.org/sr-Latn-RS/biblioteka/r/Zbirka2/sume_segmenata
// prefiksne sume, bez pamcenja elemenata niza

int main() {
    ios_base::sync_with_stdio(false); // iskljuci sinhro.
    int n; cin >> n;

    vector<int>ps(n+1);
    ps[0] = 0;

    for (int i = 1; i <= n; i++)  {
        int el; cin >> el;
        ps[i] = ps[i-1] + el;     }
        
    int q; cin >> q;
    while (q--) {
        int poc, kraj; cin >> poc >> kraj;
        cout << ps[kraj+1] - ps[poc] << '\n';  }  }



