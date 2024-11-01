#include <bits/stdc++.h>
using namespace std;
// Hanoi Towers
int rb;

void hanoi( int n, string sa, string pom, string na) {
    if (n > 0) {
        // prebaci n-1 komada sa SA, pomocu NA, na POM
        hanoi(n-1, sa, na, pom);
        cout << ++rb << ". prebaci sa "<< sa << " na " << na << endl;
        hanoi(n-1, pom, sa, na);  } }

int main() {
    int n; cin >> n; // br. diskova
    hanoi(n, "levi", "srednji", "desni"); // 

    return 0;
}