#include <bits/stdc++.h>
using namespace std;
// ispis brojeva od 0 do n

void iteracija( int n ) {
    for (int i = 0; i <= n; i++)
        cout << i << ' '; 
    return; }

void rekurzija(int n) {
    if ( n >= 0) {
        rekurzija(n-1);
        cout << n << ' ';  }
    // return;
}

void rekurzija2(int n) {
    if ( n < 0 ) return; // BC
    rekurzija2(n-1);
    cout << n << ' ';
     
}

int main() {
    int n; cin >> n;
    iteracija(n); cout << endl;
    rekurzija(n); cout << endl;
    rekurzija2(n); cout << endl;


    return 0;
}