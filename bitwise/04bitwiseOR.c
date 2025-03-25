#include <stdio.h>
#define SETBIT(x, i) ( x |= (1 << i) )

// bitwise or

void ispis(unsigned broj) {
    int vel = sizeof ( unsigned ) * 8; // vel = 32
    unsigned int maska; // 100...0
    for ( maska = 1 << vel - 1; maska != 0; maska >>= 1 )
        putchar( maska & broj ? '1': '0');
    putchar('\n'); }

int main() {
    unsigned a = 1; ispis(a);

    // maskiranje
    //                          9876543210
    //a = 00000000000000000000000000000001
    // SET
    // 4 desna bita postavi na 1
    unsigned mask = 0b1111; 
    ispis(a | mask); // 
    // neparne pozicije bitova postavi na 1
    unsigned mask2 = 0b101010101010101010;
    ispis(a | mask2); //


    SETBIT(a,5); // poz. 5 na 1
    ispis(a);
    
    return 0; 

    
    
    }