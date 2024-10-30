#include <iostream>
#include <unordered_map>
using namespace std;
typedef unsigned long long ull;

ull f(ull  n, unordered_map<ull, ull>& memo) { 
    auto it = memo.find(n);  // da li je n izračunato?
    if (it != memo.end())  // jeste?
        return it->second; // vrati tu vrednost!
    // n nije izračunato?
    if (n == 1) return memo[n] = 1; // za n = 1
    // za n > 1
    ull n2 = n / 2; 
    
    if (n2 + n2 == n) // par? 
        return memo[n] = f(n2, memo); // pamti i vrati...
     // nepar?
    return memo[n] = f(n2, memo) + f(n2 + 1, memo); }

int main() {
    ull n;  cin >> n;
    unordered_map<ull, ull> memo; // hes za memo
    cout << f(n, memo);
    return 0; }