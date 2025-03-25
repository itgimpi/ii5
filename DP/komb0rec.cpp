#include <bits/stdc++.h>
using namespace std;
// broj kombinacija, n nad k...

int komb ( int n, int k ) { // 
    if ( k == 0 ) 
        return 1;
    if ( n == k )
        return 1; 
    return komb(n-1, k) + komb(n-1, k-1);
    }

int main() {
    int n, k; cin >> n >> k;
    cout << komb(n, k); }