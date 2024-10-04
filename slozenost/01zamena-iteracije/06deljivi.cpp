#include <bits/stdc++.h>
using namespace std;
// Број дељивих у интервалу
// https://petlja.org/sr-Latn-RS/biblioteka/r/Zbirka2/broj_deljivih_u_intervalu
// BF je O(n)
// O(1) ?



int main() {
    ios_base::sync_with_stdio(false); // iskljuci sinhro.
    cin.tie(0); // false is 0

    int a, b, k; cin >> a >> b >> k;
    int dob = b / k; // i b
    int prea = ( a - 1 ) / k; // bez a
    int res = dob - prea;
    cout << res;

        
    }



