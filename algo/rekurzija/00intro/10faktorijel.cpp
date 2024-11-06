#include <bits/stdc++.h>
using namespace std;
// faktorijel od n

int fkt( int n) {
    if ( n==0 ) return 1;
    //if ( n==1 ) return 1;
    return fkt(n-1)*n; }

int main() {
    int n; cin >> n;
    cout << fkt(n);


    return 0;
}