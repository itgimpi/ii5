#include <bits/stdc++.h>
using namespace std;
// y = x na n

int stepen( int x, int n ) {
    if ( n == 0 ) return 1;
    return stepen(x, n-1) * x;  }
 

int main() {
    int x, n; cin >> x >> n;
    cout << stepen(x, n) << endl;




    return 0;
}