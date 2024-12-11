#include <stdio.h>
// base 10 -> base 2

void ispis(unsigned int broj) {
    int vel = sizeof ( unsigned int ) * 8; // vel = 32
    unsigned int maska; // 100...0
    //for ( maska = 1; maska != 0; maska <<= 1 ) naopako
    //0...01 << 31, 10...0
    //    1000000...0,                      010000...0, 001000...0
    for ( maska = 1 << vel - 1; maska != 0; maska >>= 1 )
        // if ... printf ...
        putchar( maska & broj ? '1': '0');
    putchar('\n');


}

int main() {
    int a = 5; ispis(5);
   
    
    return 0; 

    
    
    }