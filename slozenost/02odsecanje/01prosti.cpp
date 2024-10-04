#include <bits/stdc++.h>
using namespace std;
// Прост број
// https://petlja.org/sr-Latn-RS/biblioteka/r/Zbirka2/prost_broj

// O(n)
bool prost(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i <= n-1; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

// O(sqrt(n))
bool prost2(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

// O(sqrt(n)) -- malo brži!
bool prost3(int n)
{
    if (n == 1) return false;
    if (n == 2) return true; 
    if (n % 2 == 0) return false;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return false;
    }
    return true;
}

// O(sqrt(n)) -- tekst: još malo brži!
bool prost4(int n)
{
    if (n == 1) return false;
    if (n == 2 || n == 3) return true; 
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 2) {
        if (n % i == 0)
            return false;
    }
    return true;
}

// O(sqrt(n)) -- tekst: još malo brži!
bool prost5(int n)
{
    if (n == 1) return false;
    if (n == 2 || n == 3) return true; 
    if (n % 2 == 0 || n % 3 == 0) return false;
    int koren = sqrt(n);
    for (int i = 5; i <= koren; i += 2) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    if (prost2(n)) cout << "Prost je broj!\n";
    else cout << "Nije prost broj!\n";
}



