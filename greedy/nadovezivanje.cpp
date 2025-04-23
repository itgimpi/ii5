#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
// Најмањи број надовезивањем више бројева

bool f1(string s1,string s2) {
    // ako je spajanjem s1 i s2
    // leksikografski manje od spajanja s2 i s1
    // onda je OK, inace zameni im mesta
    if ( s1+s2 < s2+s1 ) return true;
    else return false; }

bool f2(const string& s1, const string& s2) {
    if ( s1+s2 < s2+s1 ) return true;
    else return false; }    

bool f3(const string& s1, const string& s2) {
    return s1+s2 < s2+s1;
    

}

int main() {
    int n; cin >> n;
    vector<string>a(n); // zbog leksikografskog poredjenja
    for (int i = 0; i < n; i++) cin >> a[i];
    // f1 je f-ja za poredjenje
    sort(begin(a), end(a), f3);

    for (int i = 0; i < n ; i++) cout << a[i];




}