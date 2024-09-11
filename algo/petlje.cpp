#include <bits/stdc++.h>
using namespace std;
// Loops O(1), O(n), 

int main() {
    int n = 100;

    // klasicna petlja
    for ( int i = 0; i < n; i++ ) // O(n) 
        cout << i << ' '; // T(n) = 3n + 1
    cout << '\n';

    for ( int i = 0; i < n; i += 2 ) // O(n) 
        cout << i << ' '; // u odnosu na preth. 2x je manje vreme
    cout << '\n';


    for ( int i = 0; i < n; i += 10 ) // O(n) 
        cout << i << ' '; // u odnosu na preth. 10x je manje vreme
    cout << '\n';


    for ( int i = 0; i < 10; i++ ) // O(1) 
        cout << i << ' '; // samo 10x
    cout << '\n';


    for ( int i = 0; i < 10 && i < n; i++ ) // O(1) 
        cout << i << ' '; // samo 10x
    cout << '\n';

    for ( int i = 0; i < 10 || i < n; i++ ) // O(n) 
        cout << i << ' '; // nx
    cout << '\n';

    for ( int i = 0; i < n; i++ ) cout << i << ' '; // oba su O(n)
    for ( int j = 0; j < n; j++ ) cout << j << ' '; // duplo vise nego samo 1
    cout << '\n';

    for ( int i = 0; i < n; i++ ) // O(n^2)
        for ( int j = 0; j < n; j++ ) 
            cout << i << ' ' << j << ' '; // tacno n^2 puta 
    cout << '\n';

    for ( int i = 0; i < n; i++ ) // O(n^2)
        for ( int j = 0; j < i; j++ ) 
            cout << i << ' ' << j << ' '; // tacno n(n-1)/2 puta 
    cout << '\n';

    for ( int i = 0; i < n; i++ ) // O(n^2)
        for ( int j = 0; j <= i; j++ ) 
            cout << i << ' ' << j << ' '; // tacno n(n+1)/2 puta 
    cout << '\n';

    for ( int i = 0; i < n; i++ ) // O(n^2)
        for ( int j = i+1; j < n; j++ ) 
            cout << i << ' ' << j << ' '; // tacno n(n-1)/2 puta 
    cout << '\n';

    for ( int i = 1; i * i < n; i++ ) // sqrt n
        cout << i << ' ';
    cout << '\n';   

    int p = 0;
    for ( int i = 1; p < n; i++ ) // O
        p += i;
    cout << '\n'; 


}