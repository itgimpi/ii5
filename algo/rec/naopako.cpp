#include <bits/stdc++.h>
using namespace std;
// ispisuje brojeve od n do 0
void ispis1(int n) {
    // ispis brojeva od n do 0
    // iteracija
    for ( int i = n; i >= 0; i-- )
        cout << i << endl;
    cout << endl;
    int nn = n;
    // while
    while (nn >= 0) {
        cout << nn << endl;
        nn--;     }
    cout << endl;
    while (n >= 0) 
        cout << n-- << endl; }

void ispis2( int n) {
    if ( n >= 0 ) {
        cout << n << endl;
        ispis2(n-1);  }
    return; }

void ispis3( int n) {
    if ( n < 0 ) return; // BC na pocetak
    cout << n << endl;
    ispis3(n-1);  }

int main() {
    int n; cin >> n;
    // ispis1(n); // iteracije

    ispis2(n);
    cout << endl;
    ispis3(n);

    return 0;
}