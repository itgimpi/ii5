#include <bits/stdc++.h>
using namespace std;
// Binary Search


int main() {
    ios_base::sync_with_stdio(false); // iskljuci sinhro.
              // 0 1 2 3 4 5 6 7 8 
    vector<int>a{1,1,1,2,2,2,2,2,3,3,3,3,4,5,6,7};
    if ( binary_search(begin(a), end(a), 5) ) 
        cout << "ima 5" << endl;
    if ( binary_search(begin(a), end(a), 10) ) 
        cout << "ima 10";
    auto it1 = lower_bound(begin(a), end(a), 2);
    auto it2 = upper_bound(begin(a), end(a), 2);
    cout << it1 - a.begin() << ' ' << it2 - a.begin();





    }



