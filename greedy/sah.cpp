#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;//broj ighraca u svakom timu

    vector<int> A(n), B(n);
    for (int i = 0; i < n; ++i) cin >> A[i];//ucitava rejting svih igraca tima A
    for (int i = 0; i < n; ++i) cin >> B[i];//ucitava rejting svih igraca tima B

    sort(A.begin(), A.end());//sortira rejting igraca tima A rastuce
    sort(B.begin(), B.end());//sortira rejting igraca tima B rastuce

    int i = 0, j = 0, wins = 0;

    while (i < n && j < n) {
        if (A[i] > B[j]) {//pobedjuje tim A
            wins++;
            i++;
            j++;
        } else {
            i++; // tim A ne moze da pobedi tim B
        }
    }

    cout << wins << endl; //ispisuje koliko pobeda ima tim A
    return 0;
}