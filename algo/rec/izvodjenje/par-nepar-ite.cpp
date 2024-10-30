#include <iostream>
using namespace std;
typedef unsigned long long ull;
// O(log n)
ull f(ull  n) { 
    ull a = 1, b = 0; // a je koef. uz prvi, na pocetku 1
    while ( n > 1 ) {
        ull n2 = n / 2; // bitski...
        if ( n2 + n2 == n ) // n je par?
            a += b; // azuriraj koef. prvog
        else // nepar
            b += a;
        n = n2; } // log n
    return a + b;
    }

int main() {
    ull n;  cin >> n;

    cout << f(n);
    return 0; }