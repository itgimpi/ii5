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

    for ( int i = 1; i * i < n; i++ ) // О(sqrt n)
        cout << i << ' ';
    cout << '\n';   

    int p = 0;
    for ( int i = 1; p < n; i++ ) // О(sqrt n)
        p += i;
    cout << '\n'; 

    for (int i = 1; i < n; i *= 2) // O(log n)
        cout << i << ' '; // T = log (2) n

    for (int i = 1; i < n; i *= 3) // O(log n)
        cout << i << ' '; // T = log (3) n, brze od preth.

    for (int i = 1; i < n; i *= 10) // O(log n)
        cout << i << ' '; // T = log (10) n, brze od preth.

    // O( log n )
    p = 0; // O(1)
    for (int i = 1; i < n; i *= 2) // O(log n)
        p++;
    for (int j = 1; j < p; j *= 2) // O(log log n)
        cout << j;

    for ( int i = 0; i < n; i++ ) // O(n log n)
        for (int j = 1; j < n; j*=2)
            cout << i << j;
}