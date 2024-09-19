#include <bits/stdc++.h>
using namespace std;
// Tail Recursion to Iteration
// Fast Int Power O(log n)

int stepen(int x, int n) { // non-tail recursion
    if (n==0) return 1; // BC
    if ( n % 2 == 1 )return stepen(x, n-1) * x; // non tail
    return stepen ( x * x, n/2); }

int stepen2(int x, int n, int res) { // tail recursion
    if (n==0) return res; // BC
    if (n % 2 == 1) return stepen2(x, n-1, res * x);
    return stepen2(x * x, n / 2, res); }

int stepen3(int x, int n) { // iteration
    int res = 1;
    while ( n > 0 ) {
        if ( n % 2 == 1 ) {
            n--;
            res *= x; }
        else {
            n /= 2;
            x = x * x;
        } }
    return res;  }

int main() {
    int x = 2, n = 10;
    cout << stepen(x, n) << endl;
    cout << stepen2(x, n, 1) << endl;
    cout << stepen3(x, n) << endl;

    return 0; }