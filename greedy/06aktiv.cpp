#include <bits/stdc++.h>
using namespace std;
// Распоред са најмањим бројем учионица
struct vreme {
    int minuti; // vreme pretvoreno u minutiute
    bool poc; }; // da li je pocetak ili kraj?


int res( vector<vreme>&v) {
    sort( begin(v), end(v),
        []( vreme v1, vreme v2) {
            return (v1.minuti < v2.minuti) || ( v1.minuti == v2.minuti && !v1.poc && v2.poc); } );
    int bruc = 0;
    int naj = 0;
    
    for (auto vv : v) { // sa svako sortirano vreme...
        if (vv.poc) {
            bruc++;
            naj = max(naj, bruc);
        }
        else {
            bruc--;
        }

    }
    return naj;

}

int main() {
    int n; cin >> n;
    vector<vreme>v;
    for (int i = 0; i < n; i++) {
        int s1, m1, s2, m2;
        cin >> s1 >> m1 >> s2 >> m2;
        vreme v1, v2;
        v1.minuti = 60 * s1 + m1;
        v1.poc = true;
        v2.minuti = 60 * s2 + m2;
        v2.poc = false;
        v.push_back(v1);
        v.push_back(v2);
    }
    cout << res(v);
    
}