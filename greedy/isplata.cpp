#include <bits/stdc++.h>
using namespace std;
// isplata

int naj(int iznos) {
    int res = 0;
    //vector<int>pare {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000, 2000, 5000};
    vector<int>pare {5000, 2000, 1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};

    while ( iznos > 0 )
    {
        for ( auto p : pare )
            if (iznos >= p) {
                iznos-=p;
                res++;
                break;
            }
        
    }
    
    
   

    return res;

}

int main() {
    int n; cin >> n; // iznos
    cout << naj(n); }