#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int>a{2, 7, 2, 4, 1, 3, 6};

    for (int i = 0; i < a.size(); i++) { // za svake el.
        bool nadjen = false;    //
        for (int j = i - 1; j >= 0; j--) // provera od preth. na levo...
            if (a[j] > a[i]) { // kad naidje na prvog veceg...
                cout << a[j] << ' '; // ispis
                nadjen = true; // ne trazi vise!
                break; }
        if (!nadjen)
            cout << "-" << ' '; } }
