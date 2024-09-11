#include <bits/stdc++.h>
using namespace std;
// broj cifara

int zbircif ( int n ) {
    if ( n < 10 ) return n; // samo jedna cifra
    return zbircif( n / 10 ) + n % 10;
}   

int zbircif2 ( int n ) { // ne radi za n = 0
    if ( n == 0 ) return n; // samo jedna cifra
    return zbircif2( n / 10 ) + n % 10;
} 

int main() {
    int n; cin >> n;
    cout << zbircif(n) << endl;
    cout << zbircif2(n) << endl;



    return 0;
}