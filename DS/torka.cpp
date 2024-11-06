#include <iostream>
#include <tuple>

using namespace std;
// Torka

int main() {

    tuple<int, int> a; // torka sa 2 svojstva
    a = make_tuple(11, 12);

    tuple<int, int, int> b {21, 22, 23};

    cout << get<0>(a) << " " << get<1>(a) << endl;
    
    int p1, p2, p3;
    tie(p1, p2, p3) = b;
    cout << p1 << " " << p2 << " " << p3 << endl; 
    return 0; 


    return 0; }