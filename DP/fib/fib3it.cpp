#include <bits/stdc++.h>
using namespace std;
// Fibonacci, DP, T(n), M(1)

int fib ( int n ) { // DP
    // trenutni fib., preth. fib., pre predh. fib.

// Fib. array: 1, 1, 2, 3, 5, 8, ...

    int tre, pre = 1, prepre = 1;
    for (int i = 2; i <= n; i++) {
        tre = pre + prepre;
        prepre = pre;
        pre = tre; }
    return tre; }

int main() {
    int n; cin >> n;
    cout << fib(n); }  // f10