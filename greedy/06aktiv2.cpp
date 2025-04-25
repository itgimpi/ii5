#include <bits/stdc++.h>
using namespace std;
// Распоред са најмањим бројем учионица

struct vreme {
    int m; // vreme u minutima, zbog poredjenje
    bool p; // da li je pocetak? T
};

int najbruc(vector<vreme>&v) {
    //sort(..., ...., f)
    sort( begin(v), end(v),
        []( vreme v1, vreme v2 ){
            //if (...) return true else return false
            return v1.m < v2.m || (v1.m == v2.m && !v1.p && v2.p );
        } );
    int bruc = 0; // broj ucionica
    int najbruc = 0; // najvise ucionica

    // for ( int i = 0; i < 2 * v.size(); i++ )
    for ( auto vr : v ) {
        if (vr.p) { // ako je to vreme pocetak
            bruc++;
            najbruc = max(najbruc, bruc);
        }
        else {
            bruc--;
        }

    }
    return najbruc;
}

int main() {
    int n; cin >> n; // br. casova
    vector<vreme>v; // push...
    for (int i = 0; i < n; i++) {
        int s1, m1, s2, m2;
        cin >> s1 >> m1 >> s2 >> m2;
        vreme v1, v2;
        v1.m = s1 * 60 + m1;
        v1.p = true;
        v2.m = s2 * 60 + m2;
        v2.p = false;
        v.push_back(v1);
        v.push_back(v2); }
    cout << najbruc(v);

    
    
}