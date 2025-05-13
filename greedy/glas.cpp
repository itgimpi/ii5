#include <bits/stdc++.h>
using namespace std;

int main() {
    double domet;       // unosimo domet glasa
    cin >> domet;
    int n;              // unosimo broj glasnika
    cin >> n;

    vector<double> pozicije(n);    // vektor u koji cemo smestiti pozicije svih glasnika
    for (int i = 0; i < n; i++)
        cin >> pozicije[i];       // ucitavanje svih pozicija

    double t = 0.0;               // pocetno vreme (prvi glasnik odmah zna poruku)
    double p = pozicije[0];      
	  //pozicija do koje je stigla poruka (prvo -> pozicija prvog glasnika)

    for (int i = 1; i < n; i++) {   // prolazimo kroz sve ostale glasnike
        // proverimo da li trenutni glasnik moze da sazna poruku u vremenu t
        if (pozicije[i] - t - p > domet) { 
        //pozicije[i] - t je najviše dokle on može da stigne ulevo (ide prema poruci)
        //p je pozicija onog ko viče
        
            // izracunavamo koliko treba da prodje da bi se njihov domet "sreo"
            t += (pozicije[i] - t - p - domet) / 2.0; 
	//(leva granica do koje je stigao glasnik)−(desna granica dokle dopire poruka)

            p = pozicije[i] - t;
//kreće se maksimalno t sekundi ka levoj strani i zato je ovo njegova najdalja moguća leva pozicija
//tj. tu se nalazi kada sazna poruku
            
        } else {
            // ako su vec u dometu, azuriramo poziciju do koje se prenosi poruka a to je :
            // minimalna vrednost izmedju toga dokle je stigao novi glasnik
            // i maksimalnе granice dometa peth. glasnika
            p = min(pozicije[i] + t, p + domet); 
        }
    }

    // ispisujemo najmanje potrebno vreme, zaokruzeno na 3 decimale
    cout << fixed << showpoint << setprecision(3)
         << t << endl;
    return 0;}