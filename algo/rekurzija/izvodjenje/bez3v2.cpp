#include <bits/stdc++.h>
using namespace std;
// Не садрже цифру 3, https://petlja.org/sr-Latn-RS/biblioteka/r/Zbirka2/ne_sadrze_cifru_3
// BF2, bolji...
                          // origin, naopak
int bez3( int n, int d) { // 12345 -> 54321, 99999
    if ( n == 0 ) return 1; // BC

    int c = n % 10; // c je 1, 1 je prva u 12345
    if ( c < 3) 
        return c * bez3( d / 10, d / 10) + bez3( n / 10, d / 10);
    else if ( c == 3)
        return 3 * bez3( d / 10, d / 10);
    else if ( c > 3) 
        return (c-1) * bez3( d / 10, d / 10) + bez3( n / 10, d / 10);
    

}

int main() {
    int n; cin >> n; // n je 12345

    // lakse se uzima skroz desna cifra
    int nao = 0; // naopako 12345 -> 54321
    int dev = 0; // devetke -> 99999

    do { // izvrsi se bar 1 
        nao = nao * 10 + n % 10; // okrece cifre, 0, 5, 54, 543, 5432, 54321
        dev = dev * 10 + 9; // 0, 9, 99, 999, 9999, 99999
        n /= 10; // izbaci cifru
    } while (n>0);

    //cout << nao << endl << dev;
    cout << bez3(nao, dev); // 54321, 99999

    return 0; }