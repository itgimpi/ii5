#include <iostream>      
#include <vector>        
#include <algorithm>     
#include <iomanip>       
using namespace std;     

struct Kandidat {
    int kvalitet;        
    int plata;           
    double r;            
};

int main() {
    int n;
    cin >> n;  // Učitava broj kandidata

    vector<Kandidat> kandidati(n);  // Pravi vektor za čuvanje svih kandidata

    for (int i = 0; i < n; ++i) {
        cin >> kandidati[i].kvalitet >> kandidati[i].plata;  // Unosi kvalitet i traženu platu
        kandidati[i].r = (double)kandidati[i].plata / kandidati[i].kvalitet;  // Izračunava r = plata / kvalitet
    }

    int k;
    cin >> k;  // Učitava broj kandidata koje treba zaposliti

    // Sortira kandidate po vrednosti r (od najmanjeg ka najvećem)
    // Kandidati sa manjim r su poželjniji jer traže manju platu u odnosu na kvalitet
    sort(kandidati.begin(), kandidati.end(), [](const Kandidat &a, const Kandidat &b) { // begin() daje iterator na prvi element vektora.
                                                                                        // end() daje iterator na poslednji element + 1 (poziciju iza kraja).
        return a.r < b.r;  // Kandidat sa manjim r ide pre kandidata sa većim r
    });

    long long zbir_kvaliteta = 0;  // Zbir kvaliteta trenutne grupe kandidata
    double min_trosak = 0;        // Minimalni trošak koji tražimo (inicijalizacija na 0)

    // Obilazimo sve kandidate jedan po jedan
    for (int i = 0; i < n; ++i) {
        zbir_kvaliteta += kandidati[i].kvalitet;  // Dodajemo kvalitet trenutnog kandidata u ukupan zbir

        // Kada stignemo do najmanje k kandidata (ili više), računamo trošak
        if (i >= k - 1) { // Kada imamo bar k kandidata (od i = k-1), počinjemo da računamo trošak za grupu

            // Izračunavamo ukupni trošak kao r * zbir kvaliteta
            double trosak = kandidati[i].r * zbir_kvaliteta;

            // Ako je prva grupa ili je trošak manji od dosadašnjeg minimuma, sačuvaj kao najbolji rezultat
            if (i == k - 1 || trosak < min_trosak) {
                min_trosak = trosak;
            }
     
            // Oduzimamo kvalitet kandidata koji "ispada" iz grupe (on se više ne razmatra)
            zbir_kvaliteta -= kandidati[i - k + 1].kvalitet;
        }
    }

    // Ispisujemo minimalni trošak, sa dve decimale
    cout << fixed << setprecision(2) << min_trosak << endl;

    return 0;  
}