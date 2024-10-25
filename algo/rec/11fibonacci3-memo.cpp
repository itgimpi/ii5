using namespace std;
#include <iostream>
#include <vector>

int memo[1002]; // stat. niz, sve na 0

int f (int n) {
    if (n==0 || n==1) return 1; // BC, vrati 1
    if (memo[n] == 0) // nije izračunat...
        memo[n] = f(n-1) + f(n-2); // izračunaj i...
    
    return memo[n]; } // vrati

int main() {
    int n; cin >> n;
    //memo[0]=memo[1]=1;
    //for (int i = 0; i < 1000; i++) memo[0] = 0;
    cout << f(n) << endl;

  return 0; }