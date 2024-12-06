#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int>a{2, 7, 2, 4, 1, 3, 6};
    stack<int> s; //stek za kandidate za najbliže veće prethodnike
    for (int i = 0; i < a.size(); i++) {
        while (!s.empty() && s.top() <= a[i])
            s.pop();// sa steka se sklanjaju elementi koji nisu više kandidati, 
                    //jer ih je i-ti zaklonio
        if (s.empty()) // ako na steku nema preostalih kandidata, 
                       //element nema većih prethodnika
            cout << "-" << endl;
        else// element na vrhu steka je najbliži veći prethodnik tekućem
            cout << s.top() << endl;
        // i-ti element postaje kandidat za najbližeg većeg prethodnika narednim elementima
        s.push(a[i]); }
    return 0; }
