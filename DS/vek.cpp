#include <bits/stdc++.h>
using namespace std;
// Vektor Hand Made

// vector<int>v;
int *v = nullptr;
int vel = 0; // velicina
int kap = 0; // kapacitet

// v[i], v.at(i)
int citanje( int i ) { // citaj el. sa i-te pozicije
    return v[i]; }
    //return *(v + i); }

// v[i] = 5;
void upis(int i, int vre) { // indeks i vrednost
    // ovde moze da ide provera da li je i kako treba...
    v[i] = vre; }

void realokacija(int novikap) {
    int * v2 = new int[novikap];
    kap = novikap;

    if ( v != nullptr ) { // BC, non empty vector
        copy_n(v, min(novikap, vel), v2);
        delete [] v;  } // oslobodi mem. starog...
    v = v2;
    
}
void dodaj (int vr) {
    if (kap <= vel)
        //realokacija(kap+1);
        realokacija(2*kap+1);
    v[vel++]=vr;
}

void izbaci() {
    if (vel > 0) vel--;
}

int zadnji () {
    return v[vel-1];
}

int main() {
    dodaj(1);dodaj(2);dodaj(3);dodaj(4);dodaj(5);
    cout << zadnji(); izbaci();
    cout << zadnji(); izbaci();
    cout << zadnji(); izbaci();
    cout << zadnji(); izbaci();
    cout << zadnji(); izbaci();
    



    
    return 0; }