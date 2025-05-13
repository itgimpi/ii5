#include <bits/stdc++.h>
using namespace std;
// Распоред активности
typedef pair<int, int>cas; // pocetak, kraj

int main() {
    int n;
    cin >> n;
    vector<cas>casovi(n);
    for (int i = 0; i < n; i++) {
        int s1, m1, s2, m2;
        cin >> s1 >> m1 >> s2 >> m2;
        //pair<...
        cas c;
        c.first = s1*60+m1;
        c.second = s2*60+m2;
        casovi[i] = c;
    }
    sort(begin(casovi), end(casovi), 
        [](cas a, cas b) { return a.second < b.second; } );

    int br = 1;
    int kraj = casovi[0].second; // da ne krene neki drugi cas...
    for ( int i = 1; i < n; i++ ) {
        if ( casovi[i].first >= kraj ) {
            kraj = casovi[i].second;
            br++;
        }
    }
    cout << br;
}

