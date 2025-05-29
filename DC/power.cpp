#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
/* Stepenovanje */

ull st1( ull x, ull n) { // O(n)
    if ( n == 0 ) return 1; // BC, x^0 = 1
    return x * st1(x, n - 1); } // x^n = x * x^(n-1)

ull st2( ull x, ull n) {
    ull res = 1; // res = x
    for ( int i = 0; i < n; i++) // i < n-1 
        res *= x;
    return res; }

ull st3( ull x, ull n ) { // O(logn)
    if ( n == 0 ) return 1; // BC 
    if ( n % 2 == 1 ) // n je neparan
        return x * st3(x, n - 1); // n - 1 je paran
    // paran
    return st3( x * x, n / 2); }

ull st4 ( ull x, ull n, ull res ) {
    if ( n == 0 )
        return res;
    if ( n % 2 == 1 )
        return st4( x, n - 1, res * x);
    return st4( x * x, n / 2, res); }

ull st5 ( ull x, ull n ) {
    ull res = 1;
    while ( n > 0 ) {
        if ( n % 2 == 1 ) {
            res = res * x;
            n--; }
        else {
            x = x * x;
            n = n / 2; } }
    return res; }

ull st6 ( ull x, ull n) {
    ull res = 1;
    while ( n > 0 ) {
        if ( n & 1 ) {
            res = res * x;
            n--; }
        else {
            x = x * x;
            n = n >> 1; } }
    return res; }

int main() {
    ull x, n, y;
    cin >> x >> n; // osnova i stepen
    y = st1(x, n); cout << y << '\n';
    y = st2(x, n); cout << y << '\n';
    y = st3(x, n); cout << y << '\n';
    y = st4(x, n, 1); cout << y << '\n';
    y = st5(x, n); cout << y << '\n';
    y = st6(x, n); cout << y << '\n';
}
