#include <bits/stdc++.h>
using namespace std;
// Tail vs Non Tail Recursion

int fkt ( int n ) {
    if ( n == 0 ) return 1;
    return fkt( n-1 ) * n; }

int f2 (int i, int n, int f) {
    if ( i > n ) return f; // BC, nema vise rek. poziva
    return f2 ( i + 1 , n, f * i ); }

int f1 (int n) {
    return f2(1, n, 1); }    

int main() {
    int n; cin >> n;
    cout << fkt(n) << '\n';
    cout << f1(n) << '\n';

    return 0; }