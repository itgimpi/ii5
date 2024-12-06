#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// do sada popunjeni skup originala (strogo manjih od i) i skup njihovih slika prosirujemo elementima vecim ili jednakim od i
// funkcija je injektivna na skupu originala i da je slika svakog originala ukljucena u skup slika i da su slike
// svih elemenata manjih od i ukljucene u skup originala
int bijekcija(const vector<size_t>& f, vector<bool>& originali, vector<bool>& slike, size_t i) {
    // skup originala se ne moze vise prosiriti na osnovu invarijante funkcija je bijekcija na skupu originala
    if (i == f.size())
        return count(begin(originali), end(originali), true);

    int rez = 0;
    // ako f[i] nije ranije oznacena kao izbacena iz skupa originala i ako f[i] nije vec slika nekog elementa iz niza originala
    if ((f[i] >= i || originali[f[i]]) && !slike[f[i]]) {
        originali[i] = true;  // ubacujemo i u skup originala i f[i] u skup slika
        slike[f[i]] = true;
        int rez_sa_i = bijekcija(f, originali, slike, i+1); // prosirujemo vecim elementima i azuriramo rezultat
        rez = rez_sa_i;
        originali[i] = false;  // izbacujemo i iz skupa originala i f[i] iz skupa slika da bismo se vratili u pocetnu poziciju
        slike[f[i]] = false; }
    if (!slike[i]) {  // ako i nije slika nekog elementa, onda on moze biti preskocen
        int rez_bez_i = bijekcija(f, originali, slike, i+1);  // prosirujemo elementima vecim od i (i je preskocen)
        if (rez_bez_i > rez)   // azuriramo rezultat ako je to potrebno
            rez = rez_bez_i;     }
    return rez;     }

int main() {
    int n; cin >> n;
    vector<size_t> f(n);
    for (int i = 0; i < n; i++)
        cin >> f[i];
    vector<bool> originali(n, false), slike(n, false);
    cout << bijekcija(f, originali, slike, 0) << endl;; 
    return 0;    }