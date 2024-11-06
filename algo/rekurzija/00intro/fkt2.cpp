#include <bits/stdc++.h>
using namespace std;
// Tail Recursion - Repna rek.

// prvi nacin i = 1, 2, ..., n

// i - brojac, n - granica, f - resenje
int f2 (int i, int n, int f) {
    if ( i > n ) return f; // BC, nema vise rek. poziva
    return f2 ( i + 1 , n, f * i ); }

int f1 (int n) { // f-ja koja od f-je sa 1 arg. poziva f-ju sa 3 arg.
    return f2(1, n, 1); }    

// drugi nacin i = n, n-1, ..., 1

int f4 (int i, int n, int f) {
    if ( i == 0 ) return f; // BC, nema vise rek. poziva
    return f4 ( i - 1 , n, f * i ); }

int f3 (int n) {
    return f4( n, n, 1); } 

// treci nacin, kao prvi, obe f-je se zovu isto!

int f5 (int i, int n, int f) {
    if ( i > n ) return f; // BC, nema vise rek. poziva
    return f5 ( i + 1 , n, f * i ); }

int f5 (int n) {
    return f5(1, n, 1); }

// cetvrti, samo 1 f-ja

int f6 (int i, int n, int f) {
    if ( i > n ) return f; // BC, nema vise rek. poziva
    return f6 ( i + 1 , n, f * i ); }

int main() {
    int n; cin >> n;
    cout << f1(n) << '\n';
    cout << f3(n) << '\n';
    cout << f5(n) << '\n';
    cout << f6(1, n, 1) << '\n';

    return 0; }