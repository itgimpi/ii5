#include <iostream>
#include <vector>
using namespace std;
// O(log n)
/* rekurzija */

int stepen2( int n ) { // najveci stepen dvojke, manji od n
    int st = 1;
    while ( st * 2 < n ) 
        st *= 2; // duplira se
    return st; }

bool morze(int n) {
    if ( n == 1 ) return true; // BC, a1 je 1
    // vrati neg. el. n - naj.st.2
    return !morze(n - stepen2(n));   }

int main() {
    int n; cin >> n;
    cout << (morze(n) ? "1" : "0") << endl;
    return 0; }