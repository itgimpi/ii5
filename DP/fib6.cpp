#include <bits/stdc++.h>
using namespace std;
// Fibonacci, 
// najbolje je T(log n)
int fib ( int n ) { // DP
    int tre, pre = 1, prepre = 1;
    for (int i = 2; i <= n; i++) {
        //tre = pre + prepre;
        tre = (pre + prepre)%1000;
        prepre = pre;
        pre = tre; }
    return tre; }

int main() {
    int n; cin >> n;
    cout << fib(n); }