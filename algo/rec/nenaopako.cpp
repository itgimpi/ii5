#include <bits/stdc++.h>
using namespace std;
// ispisuje brojeve od 0 do n


void ispis( int n) {
    if ( n < 0 ) return;
    ispis(n-1); 
    cout << n << endl;  }

void ispis2( int n) {
    if ( n >= 0 ) {
    ispis2(n-1); 
    cout << n << endl;  } 
    return; 
    }

int main() {
    int n; cin >> n;


    ispis(n); ispis2(n);
    cout << endl;


    return 0;
}