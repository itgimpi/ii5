#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
// Минимална сума два броја формирана од датих цифара

int main() {
    int n; cin >> n; // iznos
    //vector<int>a(n);
    string s = ""; 
    for (int i = 0; i < n; i++) {
        int cif;
        cin >> cif;
        s += (cif + '0');
        }
    //cout << s;

    if (n % 2 == 1)
        s += '0';

    sort( begin(s), end(s) );
    //cout << s;

    string res = "";
    int prenos = 0;

    for ( int i = s.size()-2; i >= 0; i-= 2 ) {
        res += ( s[i] - '0' + s[i+1] -'0' + prenos  ) % 10 + '0';
        prenos = ( s[i] - '0' + s[i+1] -'0' + prenos ) / 10;
    }
    for (int i = res.size()-1; i >= 0 ; i--) 

            if (res[i] != '0')
                cout << res[i];

    //cout << res;



}