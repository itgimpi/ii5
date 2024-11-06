using namespace std;
#include <iostream>
#include <vector>

vector<bool>memo(1003, false);
vector<int>fib(1003);

int f (int n) {
    if (n==0 || n==1) return 1;
    if (memo[n]) return fib[n];
    fib[n] = f(n-1) + f(n-2); 
    memo[n] = true;
    return fib[n]; }

int main() {
    int n; cin >> n;

    memo[0]=memo[1]=true;
    cout << f(n) << endl;

  return 0; }