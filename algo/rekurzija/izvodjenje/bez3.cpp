#include <bits/stdc++.h>
using namespace std;
// Не садрже цифру 3, https://petlja.org/sr-Latn-RS/biblioteka/r/Zbirka2/ne_sadrze_cifru_3
// BF, za svaki broj se provera da li sadrzi cifru 3

bool sa3(int n) { // sadrzi cifru 3
    while ( n > 0 ) {
        if ( n % 10 == 3 ) return true;
        n /= 10; }
    return false; }

int main() {
    int n; cin >> n;
    int res = 1; // nula
    for (int i = 1; i <= n; i++)
        if (!sa3(i)) res++; // ako broj ne sadrzi cifru 3...

    cout << res;

    return 0; }