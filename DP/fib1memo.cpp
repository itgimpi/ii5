#include <bits/stdc++.h>
using namespace std;
// Fibonacci, Memo, T(n), M(n)
// Nema ponovljenih...
int memo[1010]; // sve na 0, nije obradjeno

int fibm ( int n ) { // momoization
    if ( n == 0 || n == 1 ) 
        return 1;
    if ( memo[n] == 0 ) // nije obradjen?
        memo[n] = fibm(n-1) + fibm(n-2);
    return memo[n]; }

int main() {
    int n; cin >> n;
    cout << fibm(n); }