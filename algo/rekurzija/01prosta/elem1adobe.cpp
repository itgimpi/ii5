#include <bits/stdc++.h>
using namespace std;
// Бројеви од a до b

void adobe(int a, int b) {
    if ( a > b) return; // BC, ako je prvi veci od drugog, kraj
    cout << a << '\n'; // ispis
    adobe(a+1, b); }  // rekurzija

void adobe2(int a, int b) {
    if ( a <= b) { // rek,
        cout << a << '\n';
        adobe(a+1, b); } 
    return;     } // BC, a > b


int main() {
    int a, b; cin >> a >> b;

    adobe(a, b); cout << endl;
    adobe2(a, b);


    return 0;
}