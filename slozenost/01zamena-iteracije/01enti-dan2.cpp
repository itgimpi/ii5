#include <bits/stdc++.h>
using namespace std;
// N-ти дан тренинга
// https://petlja.org/sr-Latn-RS/biblioteka/r/Zbirka2/n_ti_dan_treninga

int main() {
    // ovde se In i Out pleplicu...
    ios_base::sync_with_stdio(false); // iskljuci sinhro.
    cin.tie(0); // false is 0

    int n, a, d;
    cin >> n; // br. dana a ne vaterpolista!!!

    while ( cin >> a >> d ) {
        int zadnji = a + ( n - 1 ) * d;
        cout << zadnji << '\n';
    }



}