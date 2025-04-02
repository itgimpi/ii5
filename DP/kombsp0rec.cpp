#include <bits/stdc++.h>
using namespace std;
// broj kombinacija sa ponavljanjem, loptica se vraca...
// rekurzija
int ksp1 ( int n, int k ) { // 
    // BC
    if ( k == 0) return 1; // ne bira se nista, 1 nacin
    if ( n == 0) return 0; // nema loptica, biraju se 1, 2, 3, ...
    // sledeci se dobija sabiranjem gornjeg i levog...
    return ksp1(n, k - 1) + ksp1(n - 1, k);
    }

int main() {
    int n, k; cin >> n >> k;
    cout << ksp1(n, k); }