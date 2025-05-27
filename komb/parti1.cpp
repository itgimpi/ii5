#include <iostream>       
#include <vector>         
#include <algorithm>      

using namespace std;      
// Funkcija koja rekurzivno pronalazi i ispisuje sve particije broja n
void particije(int n, vector<int>& tren, int max_sabirak) {
    if (n == 0) {  // Ako smo došli do 0, znači da je trenutna partija validna i gotova
        for (size_t i = 0; i < tren.size(); i++) {  // Prolazimo kroz sve brojeve u trenutnoj partiji
            cout << tren[i];                        // Ispisujemo broj
            if (i + 1 < tren.size()) cout << " ";   // Ako nije poslednji broj, dodajemo razmak
        }
        cout << endl;  // Nakon cele partije prelazimo u novi red
        return;        // Vraćamo se nazad iz funkcije (završavamo trenutnu granu rekurzije)
    }

    // Petlja koja proverava sve moguće sabirke od 1 do min(n, max_sabirak)
    // Ovo ograničenje osigurava da partije budu nerastuće (da se ne narušava redosled)
    for (int i = 1; i <= min(n, max_sabirak); i++) {
        tren.push_back(i);              // Dodajemo trenutni broj i u partiju
        particije(n - i, tren, i);      // Rekurzivno tražimo partije za preostali zbir (n - i)
                                        // i postavljamo novi max_sabirak na i, da održimo nerastući red
        tren.pop_back();                // Vraćamo se jedan korak unazad (uklanjamo i iz partije)
    }
}

int main() {
    int n;                             // Deklarišemo promenljivu u koju ćemo uneti broj n
    cin >> n;                          // Učitavamo broj n sa standardnog ulaza (tastature)
    vector<int> trenutna;              // Kreiramo prazan vektor koji predstavlja jednu partiju u izgradnji
    particije(n, trenutna, n);         // Pozivamo rekurzivnu funkciju sa početnim vrednostima:
                                       // željeni zbir n, prazna partija, i maksimalni sabirak n
    return 0;                          

