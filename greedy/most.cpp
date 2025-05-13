#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end()); 

    int vreme = 0;

    while (n > 3) {
        
        int opcija1 = a[1] + a[0] + a[n-1] + a[1];
        int opcija2 = a[n-1] + a[n-2] + 2 * a[0];

        vreme += min(opcija1, opcija2);
        n -= 2;
    }


    if (n == 3) {
        vreme += a[0] + a[1] + a[2];
    } else if (n == 2) {
        vreme += a[1];
    } else if (n == 1) {
        vreme += a[0];
    }

    cout << vreme << endl;

    return 0;
}