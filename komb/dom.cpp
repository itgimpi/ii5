#include <bits/stdc++.h>
using namespace std;

void ispis(vector<string>&d) {
    for (auto dd : d) 
        cout << dd << endl;

}

int domine(int k, int i, vector<string>&d) {
    //BC
    if ( i == k ) {
        ispis(d);
        cout << endl;
        return 1;
    }
    else {
        int brn = 0;
        // uspravno
        d[0][i] = '|';
        d[1][i] = '|'; 
        brn += domine(k, i+1, d);
        //polozeno
        if (i < k-1) {
            d[0][i] = '-';
            d[1][i] = '-';
            d[0][i+1] = '-';
            d[1][i+1] = '-';
            brn += domine(k, i+2, d);
        }
        return brn;

    }

}

int main() {
    int k; cin >> k; // dimenzija problema
    // dva stringa d[0], d[1]
    vector<string>d(2, string(k, ' '));
    cout << domine(k, 0, d);

     
    }