#include <iostream>
using namespace std;

// O(n sqrt n)

unsigned long long najnepdel(unsigned long long n) {
    unsigned long long max = 1;
    for (unsigned long i = 1; i * i <= n; i++)
        if (n % i == 0) {
            if ((n / i) % 2 != 0)
                return n / i;
            else if (i % 2 != 0)
                max = i;        }
    return max;     }

unsigned long long res(unsigned long long n) {
    unsigned long long zbir = 0;
    for (unsigned long long i = 1; i <= n; i++)
        zbir += najnepdel(i);
    return zbir;     }

int main() {
    unsigned long long n; cin >> n;
    cout << res(n) << endl;
  return 0;
}