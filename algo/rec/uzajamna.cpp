#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
// 3 x n
ull par(ull n);
ull nepar(ull n);

int main() {
    ull n; cin >> n; 
    if ( n % 2 == 1 ) cout << 0; // n je nepar?
    else cout << par(n); // poziv f-je par()
    return 0; }

ull par(ull n) {
    if ( n == 0 ) return 1;
    return par(n-2) + nepar(n-1)*2; } 

ull nepar(ull n) {
    if ( n == 1 ) return 1;
    return par(n-1) + nepar(n-2); }