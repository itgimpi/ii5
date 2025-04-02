#include <bits/stdc++.h>
using namespace std;
// broj kombinacija sa ponavljanjem, loptica se vraca...
// rekurzija
int ksp1 ( int n, int k ) { // 
    // BC
    if (k==0) return 1;
    if (n==0) return 0;
    return ksp1(n, k-1) + ksp1(n-1, k);
    }

int main() {
    int n, k; cin >> n >> k;
    cout << ksp1(n, k); }