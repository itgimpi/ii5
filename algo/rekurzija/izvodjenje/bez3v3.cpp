#include <bits/stdc++.h>
using namespace std;
// Не садрже цифру 3, https://petlja.org/sr-Latn-RS/biblioteka/r/Zbirka2/ne_sadrze_cifru_3
// iter, najbolji...

int bez3(int n){
    // 1234
    // kreni sa desne strane, od cifre jed. (4)
    int res = 1, d = 1;
    while ( n > 0 ) {
        int c = n % 10; // cifre sa desne strane 4, 3, 2, 1.
        if ( c < 3 ) 
            res += c * d;
        else if ( c == 3 )
            res = 3 * d; // 0..., 1..., 2...
        else // c > 3
            res += (c-1) * d;
        d *= 9;
        n /= 10; }
    return res; }

int main() {
    int n; cin >> n;
    cout << bez3(n);
    return 0; }