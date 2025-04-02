#include <bits/stdc++.h>
using namespace std;
// Josephus Problem
// O(log), malo bolje, bitski operatori
int j1( int n ) { 
    //najlevlji bit u broju n?
    int p = 0;
    while ( n != 0 ) {
        n >>= 1;
        p++;
    }
    return p;
    }

int j(int n) {
    int p = j1(n) - 1;
    //cout << p << endl;
    int maska = 1 << p;
    n ^= maska; // izbaci taj bit
    n <<= 1;
    n |= 1;
    return n;
}

int main() {
    int n; cin >> n;
    cout << j(n); }