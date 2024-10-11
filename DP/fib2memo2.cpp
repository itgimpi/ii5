#include <bits/stdc++.h>
using namespace std;
// Fibonacci, Memo, T(n), M(n)
// Nema ponovljenih...
vector<bool> memo(1010, false); // sve na 0, nije obradjeno

int fibm ( int n ) { // momoization
    if ( n == 0 || n == 1 ) return 1;
    if ( memo[n] ) // obradjen?
        return fibm(n);
    return fibm(n-1) + fibm(n-2);
    memo[n] = true;
    return fibm(n); }

int main() {
    int n; cin >> n;
    cout << fibm(n); }