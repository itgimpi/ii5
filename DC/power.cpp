#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
/* Stepenovanje */

ull st1( ull x, ull n) { // O(n)
    if ( n == 0 ) return 1;
    return x * st1(x, n - 1); }

ull st2( ull x, ull n) {
    ull res = 1;
    for ( int i = 0; i < n; i++) 
        res *= x;
    return res; }

ull st3( ull x, ull n ) { // O(n logn)
    if ( n == 0 ) return 1;
    if ( n % 2 == 1 ) // stepen je neparan
        return x * st3(x, n - 1);
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
        if ( n ^ 1 ) {
            res = res * x;
            n--; }
        else {
            x = x * x;
            n = n / 2; } }
    return res; }

int main() {
    ull x, n, y;
    cin >> x >> n;
    y = st1(x, n); cout << y << '\n';
    y = st2(x, n); cout << y << '\n';
    y = st3(x, n); cout << y << '\n';
    y = st4(x, n, 1); cout << y << '\n';
    y = st5(x, n); cout << y << '\n';
    y = st6(x, n); cout << y << '\n';
}
