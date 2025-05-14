#include <bits/stdc++.h>
using namespace std;
// svi podskupovi - rec, 0, 1, 2...

void ispis(const vector<int>&p,int j) {
     for (int i = 0; i < j; i++)
          cout << p[i] << ' ';
     cout << '\n';
}

void podskupovi(const vector<int>&s, int i, vector<int>&p, int j) {
     int n = s.size();
     //prati se nivo...
     if ( i == n ) // zadnji nivo, obrada
          ispis(p, j);
     else { // nije zadnji...
          // i-ti element iz s se ne ukljucuje u p
          // i+1 sl.nivo, j ne dodaje se el. u podskup
          podskupovi(s, i + 1, p, j);
          // i-ti el. iz s se ukljucuje u p
          p[j] = s[i];
          podskupovi(s, i + 1, p, j + 1);

     }


}

int main() {
     int n; cin >> n;
     vector<int>s(n);
     for (int i = 0; i < n; i++)
          s[i] = i; // s[i] = i+1, cin >> x
     vector<int>p(n);
     podskupovi(s, 0, p, 0);

     }