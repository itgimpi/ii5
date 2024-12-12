#include <stdio.h>
#define CLRBIT(x, i) ( x &= ~(1 << i) )

// Bitwise And

void ispis(unsigned broj) {
    int vel = sizeof ( unsigned ) * 8; // vel = 32
    unsigned int maska; // 100...0

    for ( maska = 1 << vel - 1; maska != 0; maska >>= 1 )
        putchar( maska & broj ? '1': '0');
    putchar('\n'); }

int main() {
    unsigned a = 1023; ispis(a);

    // provera (ne)parnosti
    if ( a & 1 ) printf("nepar\n");
    else printf("par\n");
    
    ( a & 1 ) ? printf("nepar\n") : printf("par\n");

    ( (a+1) & 1 ) ? printf("nepar\n") : printf("par\n");


    // maskiranje
    //                          9876543210
    //a = 00000000000000000000001111111111
    // RESET
    // 4 desna bita postavi na 0
    unsigned mask = 0b11111111111111111111111111111111; 
    ispis(a & mask); // ne menja se
    unsigned mask2 = 0b11111111111111111111111111110000; // zadnja 4 su 0
    ispis(a & mask2); // menja se

    // READ
    // procitaj samo od indeksa 2 do 5 
    unsigned mask3 = 0b111100;
    ispis(a & mask3); // samo od 2 do 5

    //CLRBIT(1023,5); // ne valja, 1023 je konst.
    CLRBIT(a,5); // poz. 5 na 0
    ispis(a);
    
    return 0; 

    
    
    }