#include <bits/stdc++.h>
using namespace std;

void ispis1(int a[], int n) { // ispis elemenata niza naopako
    if (n == 0) return;
    cout << a[n-1] << ' '; // zadnji el.
    ispis1(a, n-1); // smanjen problem za 1
}

void ispis2(int a[], int n) { // ispis elemenata niza redom
    if (n == 0) return;
    ispis2(a, n-1); // smanjen problem za 1
    cout << a[n-1] << ' '; // zadnji el. 
    }

int sn(int a[], int n) {
    if ( n == 0 ) return 0; // nema vise elemenata...
    return sn(a, n-1) + a[n-1]; }

int main() {
    int a[] = {1, 23, 34, 456, 1000};
    int n = 5;

    ispis1(a, n); cout << endl; // niz i njegova dimenzija
    ispis2(a, n); cout << endl; // niz i njegova dimenzija

    cout << sn(a, n);


    return 0;
}