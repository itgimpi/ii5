#include <bits/stdc++.h>
using namespace std;
// Josephus Problem
// O(log)
int j( int n ) { 
    //najvece 2 na k, 2 na k <= n
    int k = 1;
    while ( k <= n )
        k *= 2;
    // problem, pretera se 2 na k, 2 puta
    int dvanak = k / 2;
    return ( n - dvanak ) * 2 + 1;
    }

int main() {
    int n; cin >> n;
    cout << j(n); }