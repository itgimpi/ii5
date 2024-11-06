#include <bits/stdc++.h>
using namespace std;
// Hanoi Towers
//                са(1)    пом(2)    на(3)
void hanoi( int n, int sa, int pom, int na) {
    if (n > 0) {
        // prebaci n-1 komada sa SA, pomocu NA, na POM
        //        са(1)    пом(2)    на(3)
        hanoi(n-1, sa,     na,       pom);
        cout << "prebaci sa "<< sa << " na " << na << endl;
        // prebaci n-1 komada sa ПОМ, pomocu СА, na НА
        hanoi(n-1, pom, sa, na);  } }

int main() {
    int n; cin >> n; // br. diskova
    hanoi(n, 1, 2, 3); // Stapovi su 1, 2 i 3

    return 0;
}