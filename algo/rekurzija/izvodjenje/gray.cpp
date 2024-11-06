#include <bits/stdc++.h>
using namespace std;

string gray(unsigned n, unsigned k) {
    if ( n == 0 ) return ""; // BC

    //if ( k < 2 na n-1 ) // gore
    if ( k < ( 1u << (n-1) ) ) // gornja polovina
        return "0" + gray(n-1, k);
    // dole?
    else 
        return "1" + gray(n-1, (1u << n) - 1 - k ); // 2^n-1-k



}

int main() {
    unsigned n; cin >> n;
    unsigned k; cin >> k;
    cout << gray(n,k);

    return 0; }