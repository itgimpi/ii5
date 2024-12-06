#include <bits/stdc++.h>
using namespace std;
// Prevođenje potpuno zagrađenog infiks izraza u postfiks - rekurzivni spust
void prevedi(const string &izraz, int &i) {
    // output: 3
    if (isdigit(izraz[i]))  // cifra...
        cout << izraz[i++]; // se ispisuje!

    //         (((3*5)+(7+(2*1)))*4) i = 0
    //         ((3*5)+(7+(2*1)))*4)  i = 1  
    //         (3*5)+(7+(2*1)))*4)   i = 2 
    //         3*5)+(7+(2*1)))*4)    i = 3 
    //         *5)+(7+(2*1)))*4)    i = 3        
    else { // nije cifra, zagrada je
        i++; // preskoči otvorenu zagradu
        prevedi(izraz, i); // prevodi prvi operand
        char op = izraz[i++]; // zapamti operator
        prevedi(izraz, i); // prevodi drugi operand
        i++; // preskoči zatvorenu zagradu
        cout << op; } } // operator na kraju

int main() {
    string izraz; cin >> izraz;
    int i = 0; // indeks pozicija u izrazu 0, 1, 2, ...
    // poziva se prevedi od pozicije i = 0
    prevedi(izraz, i);
    return 0; }
