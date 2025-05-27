#include <bits/stdc++.h>
using namespace std;
// sve var sa pon - rek
// 1, 2, ..., n
void ispis(const vector<int>&v) {
     int k = v.size();
     for (int i = 0; i < k; i++)
          cout << v[i] << ' ';
     cout << '\n'; }

void varsp(vector<int>&v, int n, int kk) { // prvi poziv k = 4
     //BC, ispis...
     if ( kk == 0 ) ispis(v);
     else // dodaj nove elemente...
          // dodaju se svi elementi 1, 2, ..., n
          for ( int nn = 1; nn <= n; nn++ ) { // nn = 1, 2, .., n
               v[v.size() - kk] = nn;
               varsp(v, n, kk-1);
          }

}


int main() {
     int n, k; cin >> n >> k;
     // skup sa elementima 1, 2, ..., n
     vector<int>var(k); // svaka varijacija ima k elemenata
     varsp(var, n, k);
     
     }