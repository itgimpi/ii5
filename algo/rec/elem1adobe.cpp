#include <bits/stdc++.h>
using namespace std;
// Бројеви од a до b

void adobe(int a, int b) {
    if ( a > b) return;
    cout << a << '\n';
    adobe(a+1, b); }

void adobe2(int a, int b) {
    if ( a <= b) {
        cout << a << '\n';
        adobe(a+1, b); } 
    return;     }


int main() {
    int a, b; cin >> a >> b;

    adobe(a, b); cout << endl;
    adobe2(a, b);


    return 0;
}