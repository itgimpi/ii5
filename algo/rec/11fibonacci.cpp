#include <bits/stdc++.h>
using namespace std;
// n-ti fibonaci

int fib( int n) {
    if ( n==0 || n==1 ) return 1; // BC
    //if ( n < 2 ) // BC
    return fib(n-1) + fib(n-2);  }

int fib2( int n) {
    if ( n==1 || n==2 ) return 1; // BC
    //if ( n < 2 ) // BC
    return fib2(n-1) + fib2(n-2);  }

int main() {
    int n; cin >> n;
    cout << fib(n) << endl;
    cout << fib2(n);


    return 0;
}