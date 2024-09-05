#include <bits/stdc++.h>
using namespace std;
// zbir cifara

int zbcif( int n ) {
    if ( n < 10 ) return n;
    return zbcif( n / 10 ) + n % 10; }

int zbcif2( int n ) { // 
    if ( n == 0 ) return 0;
    return zbcif2( n / 10 ) + n % 10; }    

int main() {
    int n; cin >> n;
    cout << zbcif(n) << endl;
    cout << zbcif2(n) << endl;



    return 0;
}