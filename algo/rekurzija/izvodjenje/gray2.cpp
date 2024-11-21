#include <bits/stdc++.h>
using namespace std;
// Грејов код, https://petlja.org/sr-Latn-RS/biblioteka/r/Zbirka2/grejov_kod
// BF, za svaki broj se provera da li sadrzi cifru 3
/*
00
01
11
10

0 00  |                 k
0 01  |                 0:  000
0 11  |                 1:  001
0 10  v                 2:  011
             tj.        3:  010
1 10  ^                 4:  110
1 11  |                 5:  111
1 01  |                 6:  101
1 00  |                 7:  100
*/

string grej(unsigned n, unsigned k) {
    if (n == 0)
      return "";
    if (k < (1u << (n - 1)))
      return "0" + grej(n - 1, k);
    else
      return "1" + grej(n - 1, (1ull << n) - 1 - k);
}

int main() {
    unsigned n; cin >> n;
    unsigned k;
    cin >> k;
    cout << grej(n, k) << endl;
    return 0;
}