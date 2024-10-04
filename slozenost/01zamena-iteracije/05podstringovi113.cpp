#include <bits/stdc++.h>
using namespace std;
// Број подстрингова који почињу и завршавају са 1ј
// https://petlja.org/sr-Latn-RS/biblioteka/r/Zbirka2/br_1xxxx1_podstringova
// O(n) + O(n) + O(1), najbolje
// unos + brojanje + formula

int broj(const string &s) {
    int br1 = 0;
    for ( char c : s ) // izbroje se 1ce
        if ( c == '1' )
            br1++;
    return br1 * ( br1 - 1 ) / 2; }

int main() {
    ios_base::sync_with_stdio(false); // iskljuci sinhro.
    cin.tie(0); // false is 0


    string s;
    cin >> s;
    cout << broj(s);

        
    }



