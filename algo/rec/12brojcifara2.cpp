#include <bits/stdc++.h>
using namespace std;
// broj cifara

int brcif ( int n ) {
    if ( n < 10 ) return 1; // samo jedna cifra
    return brcif( n / 10 ) + 1;
}   

int brcif2 ( int n ) {
    if ( n == 0 ) return 0; // samo jedna cifra
    return brcif2( n / 10 ) + 1;
} 

int main() {
    int n; cin >> n;
    cout << brcif(n) << endl;
    cout << brcif2(n) << endl;



    return 0;
}