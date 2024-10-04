#include <bits/stdc++.h>
using namespace std;
// Број подстрингова који почињу и завршавају са 1ј
// https://petlja.org/sr-Latn-RS/biblioteka/r/Zbirka2/br_1xxxx1_podstringova
// O(nn), malo bolje

int broj(const string &s) {
    int res = 0;
    int n = s.length();
    for ( int l = 0; l < n - 1; l++ ) // leva granica
        if ( s[l] == '1' ) // samo ako je...
            for ( int d = l + 1; d < n; d++ )
                if ( s[d] == '1' )
                    res++;
    return res; }

int main() {
    ios_base::sync_with_stdio(false); // iskljuci sinhro.
    cin.tie(0); // false is 0


    string s;
    cin >> s;
    cout << broj(s);

        
    }



