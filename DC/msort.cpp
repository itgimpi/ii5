#include <bits/stdc++.h>
using namespace std;              /* Merge sort */
           // prvi niz      od      do   
void spoji (vector<int>&a, int i, int i2, 
            vector<int>&b, int j, int j2,
            vector<int>&c, int k) {
    while ( i <= i2 && j <= j2) 
        c[k++] = a[i] < b[j] ? a[i++] : b[j++]; // u treci ide manji el. iz 2 niza
    // jedan indeks je dosao do kraja...
    // jedan od naredna 2 while-a se ne izvrsava
    while ( i < i2 ) // recimo da prvi nije...
                c[k++] = a[i++];
    while ( j < j2 ) // ipak drugi nije...
                c[k++] = b[j++];

}

void msort(vector<int>&a, int l, int d, vector<int>&tmp) {
    if ( l < d ) { // bar 2 el., za deljenje
        // sredina
        int s = l + ( d - l ) / 2; // zbog prekoracenja
        msort(a, l, s, tmp);
        msort(a, s + 1, d, tmp);
        spoji(a, l, s, a, s+1, d, tmp, l);
        for (int i = l; i <= d; i++) a[i] = tmp[i];

    }

}

int main() {
    int n; cin >> n;
    vector<int>a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    vector<int>tmp(n);
    msort(a, 0, n - 1, tmp);
    for (int i = 0; i < n; i++) cout << a[i] << ' ';

}

