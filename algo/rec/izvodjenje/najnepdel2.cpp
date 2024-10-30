#include <iostream>
using namespace std;
typedef unsigned long long ull;
// O(n log n)

ull nnd(ull n) { // log n
    while (n % 2 == 0) // sve dok je n paran
        n /= 2; // deli ga sa 2
    return n; }

ull res( ull n) { // nx
    ull zbir = 0;
    for ( ull i = 1; i <= n; i++)
        zbir += nnd(i);
    return zbir; }

int main() {
    unsigned long long n; cin >> n;
    cout << res(n) << endl;
  return 0;
}