#include <bits/stdc++.h>
using namespace std;
// Fibonacci, DP, T(n), M(1)

int fib ( int n ) { // DP
    int tre, pre = 1, prepre = 1;
    for (int i = 2; i <= n; i++) {
        tre = pre + prepre;
        prepre = pre;
        pre = tre; }
    return tre; }

int main() {
    int n; cin >> n;
    cout << fib(n); }