#include <bits/stdc++.h>
using namespace std;
// Fibonacci, Rec, T(2^n), M(2^n)
// Uglavnom ponovljeni pozivi...

int fib ( int n ) { // C resenje, n = 0, 1, 2, .... 
    if ( n == 0 || n == 1 )
        return 1;
    return fib(n-1) + fib(n-2); }

int fib2 ( int n ) { // mat. resenje, n = 1, 2, .... 
    if ( n == 1 || n == 2 )
        return 1;
    return fib2(n-1) + fib2(n-2); }

int main() {
    int n; cin >> n;
    cout << fib(n) << endl << fib2(n); }