#include <bits/stdc++.h>
using namespace std;
// isplata

int naj(int n) {
    int res = 0;
    //vector<int>pare {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000, 2000, 5000};
    vector<int>pare {5000, 2000, 1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    
    for ( auto p : pare )
        if ( n >= p ) {
            //n -= p;
            //res++;
            int brn = n / p;
            n -= p * brn;
            //n %= p;
            res += brn;
            if (n == 0) break;
            }

    return res;

}

int main() {
    int n; cin >> n; // iznos
    cout << naj(n); }