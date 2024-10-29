#include <iostream>
#include <vector>
using namespace std;

/* Низ се може попунити и помоћу само једне петље у којој се врши преписивање елемената док се не упише њих n
 тако што се на место i преписује елемент са позиције i−k, увећавајући степен двојке k када се цео претходни подсегмент препише.*/

bool Morze(int n) {
    vector<bool> a(n+1);
    a[1] = true;
    // rastojanje elemenata koji se negiraju
    int k = 1;
    
    for (int i = 2; i <= n; i++) { // popunjava niz zakljucno sa pozicijom n
        a[i] = !a[i - k]; // negiramo odgovarajuci element
        
        if (i == 2 * k) // negirali smo ceo segment, pa prelazimo na sledeci
            k *= 2;    }
    
    return a[n]; // upisano je n elemenata niza, pa ocitavamo rezultat
}

int main() {
    int n; cin >> n;
    cout << (Morze(n) ? "1" : "0") << endl;
    return 0; }