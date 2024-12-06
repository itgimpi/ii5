#include <bits/stdc++.h>
using namespace std;

bool jeoperator(char c) { // da li je operator?
    return c == '+' || c == '*'; }

int primeni(char op, int op1, int op2) { // ...operator
    int v;
    switch(op) { // zavisno od operatora...
    case '+': v = op1 + op2; break;
    case '*': v = op1 * op2; break; } 
    return v; } // ...vrati vrednost

int main() {
    string postfiks; cin >> postfiks; //ulaz
    stack<int> s;
     // obrada postfiksa
    for (char c : postfiks) { // za svaki znak...

        if (isdigit(c)) // cifre idu na...
            s.push(c - '0'); // stek, 48->0, 49->1, ...

        else if (jeoperator(c)) { // ako je operator...

            int op2 = s.top(); s.pop(); //operandi su... 
            int op1 = s.top(); s.pop(); //na vrhu steka
            s.push(primeni(c, op1, op2)); } } //primena
    cout << s.top() << endl; // vrednost je na vrhu steka
    return 0;  }
