#include <bits/stdc++.h>
using namespace std;
// sort sa f-jom poredjenja, O(nn) 
// O je previse, br. swap-ova isto

bool f(int a, int b) { return a < b; }   // samo 1 red

int main() {
    ios_base::sync_with_stdio(false); // iskljuci sinhro.

    int n; cin >> n;
    vector<int>a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    for ( int i = 0; i < n - 1; i++ ) // levi indeks
        for ( int j = i + 1; j < n; j++ ) // desni
            if ( f( a[i], a[j] ) ) // sve u redu...
                continue; // predji na sl. iteraciju...
            else // nije... 
                swap( a[i], a[j] ); // zameni ih

    for (int i = 0; i < n; i++) cout << a[i] << ' ';    
    }



