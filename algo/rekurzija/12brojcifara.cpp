#include <bits/stdc++.h>
using namespace std;
// broj cifara

int brcif( int n ) {
    if ( n < 10 ) return 1;
    return brcif( n / 10 ) + 1; }

int brcif2( int n ) { // ne radi za n==0
    if ( n == 0 ) return 0;
    return brcif2( n / 10 ) + 1; }    

int main() {
    int n; cin >> n;
    cout << brcif(n) << endl;
    cout << brcif2(n) << endl;



    return 0;
}