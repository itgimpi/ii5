#include <bits/stdc++.h>
using namespace std;
// Tail Recursion
// faktorijel od n

// prvi nacin, 2 f-je, i = 1, 2, 3, ..., n
//    brojac, granica, resenje
int f2(int i, int n, int f) { // Tail Rec.
    if ( i > n ) return f;//BC
    return f2(i+1, n, f * i); } // <- nema *n, i = 1, 2, 3, ..., n

int f1(int n) {
    return f2(1, n, 1); }  // poziva se f2

// drugi nacin, 2 f-je, i = n, n-1, n-2, ..., 1

int f4(int i, int n, int f) { // Tail Rec.
    if ( i == 0 ) return f;//BC
    return f4(i-1, n, f * i); } // <- nema *n, i = n, n-1, n-2, ..., 1

int f3(int n) {
    return f4(n, n, 1); }  // poziva se f4    

// treci nacin, sve f-je se zovu isto!

int f5(int i, int n, int f) { // Tail Rec.
    if ( i == 0 ) return f;//BC
    return f5(i-1, n, f * i); } // <- nema *n, i = n, n-1, n-2, ..., 1

int f5(int n) {
    return f5(n, n, 1); }  // poziva se f4 

// 4-ti nacin, samo jedna f-ja

int f6(int i, int n, int f) { // Tail Rec.
    if ( i > n ) return f;//BC
    return f6(i+1, n, f * i); } // <- nema *n, i = 1, 2, 3, ..., n

// 5-i nacin, iteracija
int f7(int i, int n, int f) { // Non Rec., Ite.
    //if ( i > n ) return f;//BC
    //return f6(i+1, n, f * i); } // <- nema *n, i = 1, 2, 3, ..., n
    while ( i <= n ) {
        f *= i;
        i++;
        // f *= i++;
         }
    return f;
}

int main() {
    int n; cin >> n;
   
    cout << f1(n) << '\n'; // poziva se f1
    cout << f3(n) << '\n';
    cout << f5(n) << '\n';
    cout << f6(1, n, 1) << '\n';
    cout << f7(1, n, 1) << '\n';
    return 0;
}