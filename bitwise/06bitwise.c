#include <stdio.h>
// some bitwise funtions 

void ispis(unsigned broj) {
    int vel = sizeof ( unsigned ) * 8; // vel = 32
    unsigned int maska; // 100...0
    for ( maska = 1 << vel - 1; maska != 0; maska >>= 1 )
        putchar( maska & broj ? '1': '0');
    putchar('\n'); }

void ispis2(unsigned x) { // naopaki bitski ispis
    // maska je 000000000000000001, sledeca je 0000000000000010, 0000000000100, 
    for ( unsigned maska = 1; maska; maska <<= 1 )
        putchar( maska & x ? '1': '0');
    putchar('\n'); }

int br1(unsigned x) { // broj jedinica u binarnom zapisu
    int br = 0;
    for ( unsigned maska = 1; maska; maska <<= 1 )
        //putchar( maska & x ? br++ : 1);
        if ( maska & x ) br++;
    return br; }

int br0(unsigned x) { // broj nula u binarnom zapisu
    return 32 - br1(x); }

unsigned n_od_p_na_1( unsigned x, int p, int n ) {
    //76543210, p = 6, n = 4
    // p  p-n+1
    //01111000 <-target
    //unsigned maska1 = ~0;
    //11111111
    //unsigned maska2 = ~0 << n;
    //11110000
    //unsigned maska3 = ~(~0 << n);
    //00001111
    unsigned maska4 = ~(~0 << n) << p - n + 1;

    return x | maska4;
}

int main() {
    unsigned a = 123456789; ispis(a);
    //                          9876543210
    //a = 00000111010110111100110100010101
    ispis2(a);
    printf("%d\n", br1(255));
    printf("%d\n", br0(255));
    ispis( n_od_p_na_1 (a, 20, 10) );
 

    
    return 0; }