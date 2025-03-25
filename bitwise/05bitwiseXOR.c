#include <stdio.h>
#define FLIPBIT(x, i) ( x ^= (1 << i) )

// bitwise xor

void ispis(unsigned broj) {
    int vel = sizeof ( unsigned ) * 8; // vel = 32
    unsigned int maska; // 100...0
    for ( maska = 1 << vel - 1; maska != 0; maska >>= 1 )
        putchar( maska & broj ? '1': '0');
    putchar('\n'); }

int main() {
    unsigned a = 123456789; ispis(a);

    // maskiranje
    //                          9876543210
    //a = 00000111010110111100110100010101
    // FLIP
    // promeni sve bitove
    unsigned mask = 0b11111111111111111111111111111111;  
    ispis(a ^ mask); // 
    // promeni bitove u desnoj polovini bin. zapisa
    unsigned mask2 = 0b01111111111111111;
    ispis(a ^ mask2); //


    FLIPBIT(a,5); // poz. 5 na 1
    ispis(a);
    
    return 0; 

    
    
    }