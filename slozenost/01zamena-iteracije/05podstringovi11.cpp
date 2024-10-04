#include <bits/stdc++.h>
using namespace std;
// Број подстрингова који почињу и завршавају са 1
// https://petlja.org/sr-Latn-RS/biblioteka/r/Zbirka2/br_1xxxx1_podstringova
// O(nn)

// int broj(string s) {
int broj(const string &s) {
    int res = 0;
    //int n = s.size();
    int n = s.length();
    for ( int l = 0; l < n - 1; l++ ) // leva granica
        for ( int d = l + 1; d < n; d++ ) // desna...
            if ( s[l] == '1' && s[d] == '1' )
                res++;
    return res; }

int main() {
    ios_base::sync_with_stdio(false); // iskljuci sinhro.
    cin.tie(0); // false is 0


    string s; cin >> s;
    cout << broj(s);       
    }



