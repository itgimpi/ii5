#include <bits/stdc++.h>
using namespace std;
// Бројеви од a до b

void zmurke(int dg, int gg) {
    if ( dg > gg ) return; // BC
    cout << dg << '\n';
    zmurke( dg + 5, gg ); }

int main() {
    int gg; cin >> gg; // gornja granica
    int dg = 5;

    zmurke(dg, gg); cout << endl;



    return 0;
}