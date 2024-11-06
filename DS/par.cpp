#include <bits/stdc++.h>
using namespace std;
// Par

int main() {

    pair<int, int> a, b; // deklaracija parova a, b (od po 2 cela broja)

    a.first = 11; // prvo svojsto od a
    a.second = 12; // drugo...

    b.first = 21; b.second = 22;

    pair<int, int> c = make_pair(31, 32); // kao a

    pair <int, int> d {41, 42}; // isto

    cout << a.first << " " << a.second << endl;
    cout << c.first << " " << c.second << endl;
    cout << d.first << " " << d.second << endl;

    int p1, p2;
    tie(p1, p2) = b;
    
    cout << p1 << " " << p2 << endl; 
    return 0; }