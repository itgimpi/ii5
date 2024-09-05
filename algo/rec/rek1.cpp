#include <bits/stdc++.h>
using namespace std;
// ispis brojeva od n do 0

void iteracija( int n ) {
    for (int i = n; i >= 0; i--)
        cout << i << ' '; 
    return; }

void rekurzija(int n) {
    if ( n >= 0) {
        cout << n << ' ';
        rekurzija(n-1); }
    // return;
}

void rekurzija2(int n) {
    if ( n < 0 ) return; // BC
    cout << n << ' ';
    rekurzija2(n-1); 
}

int main() {
    int n; cin >> n;
    iteracija(n); cout << endl;
    rekurzija(n); cout << endl;
    rekurzija2(n); cout << endl;


    return 0;
}