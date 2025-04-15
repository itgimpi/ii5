#include <bits/stdc++.h>
using namespace std;
// Реч у реч прецртавањем слова (prve)

int main() {
     string s1, s2; cin >> s1 >> s2;

     int i = 0, j = 0; // indeksi prve i druge reci
     while ( i < s1.size() && j < s2.size() ) {
          if ( s1[i] == s2[j] ) // ako su slova ista
               j++; // povecavaju se oba
          i++; // samo drugi
     }
     if ( j == s2.size() ) cout << "da";
     else cout << "ne";
     }