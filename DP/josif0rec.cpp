#include <bits/stdc++.h>
using namespace std;
// Josephus Problem REC
int j(int n, int k) {
    // BC, samo 1 covek, on je resenje
    if ( n == 1 ) return 0; // 0 zbog modularne aritmetike
    return (j(n-1, k) + k) % n; 
}

int main() {
    int n, k; cin >> n >> k;
    cout << j(n, k) + 1; // resenje se broji od 1
    }