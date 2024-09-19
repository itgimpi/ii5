#include <bits/stdc++.h>
using namespace std;
// Tail Recursion to Iteration
// Int Power O(n)

int stepen(int x, int n) { // non-tail recursion
    if (n==0) return 1; // BC
    return stepen(x, n-1) * x; }

int stepen2(int x, int n, int res) { // tail recursion
    if (n==0) return res; // BC
    return stepen2(x, n-1, res * x); }

int stepen3(int x, int n) { // iteration
    int res = 1;
    while ( n > 0 ) {
        n--; res *= x; }
    return res;  }

int main() {
    int x = 2, n = 10;
    cout << stepen(x, n) << endl;
    cout << stepen2(x, n, 1) << endl;
    cout << stepen3(x, n) << endl;

    return 0; }