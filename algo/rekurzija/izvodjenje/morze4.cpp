#include <iostream>
#include <vector>
using namespace std;
// O(log n)
/* iteracija */

int stepen2( int n ) { // najveci stepen dvojke, manji od n
    int st = 1;
    while ( st * 2 < n ) 
        st *= 2; // duplira se
    return st; }

bool morze(int n) {
    bool m = true; // m1 = 1
    while ( n > 1 ) {
        n -= stepen2(n);
        m = !m;
    }
    return m;
       }

int main() {
    int n; cin >> n;
    cout << (morze(n) ? "1" : "0") << endl;
    return 0; }