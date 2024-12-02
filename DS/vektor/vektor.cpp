#include <bits/stdc++.h>
using namespace std;

    // vector<int>v;
    int *v = nullptr;
    int kapacitet = 0, velicina = 0;

    //v[i], v.at(i)
    int citanje (int i) {
        // fali provera...
        return v[i];
    }

    //v[i] = vrednost;
    void upis( int i, int vre ) {
        // provera...
        v[i] = vre; 
    }

    void realokacija ( int novi ) { // novi kapacitet
        int *v2 = new int[novi]; // alokacija na novi kapacitet

        kapacitet = novi;
        if ( v != nullptr ) { // nije prazan?
            // kopiraj elemente preth. vektora...
            copy_n( v, min(velicina, novi), v2 ); // da li se smanjuje ili povecava...
            delete [] v;
        }
        v = v2; }

    //push_back(val)
    void dodaj(int vre) {
        if (kapacitet <= velicina)
            realokacija(kapacitet+1);
        v[velicina++] = vre;
    }

    //pop_back
    void izbaci() {
        if ( velicina > 0 )
            velicina--;
    }
    // back
    int zadnji() {
        return v[velicina-1];
    }

    void rasturi() {
        delete [] v; 
    }

int main () {
    dodaj(1);dodaj(2);dodaj(3);dodaj(4);dodaj(5);

    cout << citanje(2) << endl; 
    upis(2, 10);   

    cout << zadnji() << ' '; izbaci();
    cout << zadnji() << ' '; izbaci();
    cout << zadnji() << ' '; izbaci();
    cout << zadnji() << ' '; izbaci();
    cout << zadnji() << ' '; izbaci();


    
    return 0;
}