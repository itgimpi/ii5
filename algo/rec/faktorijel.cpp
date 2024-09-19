#include <bits/stdc++.h>
using namespace std;
// Tail vs Non-Tail Recursion
// faktorijel od n

int fkt ( int n ) { // Non-Tail Rec
    if ( n == 0 ) return 1;
    return fkt(n-1) * n; } // <- zbog  * n

int f2(int i, int n, int f) { // Tail Rec.
    if ( i > n ) return f;//BC
    return f2(i+1, n, f * i); } // <- nema *n

int f1(int n) {
    return f2(1, n, 1); }  // poziva se f2

int main() {
    int n; cin >> n;
    cout << fkt(n) << '\n';
    cout << f1(n) << '\n'; // poziva se f1

    return 0;
}