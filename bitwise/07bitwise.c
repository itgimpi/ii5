#include <stdio.h>
// some bitwise funtions 

void ispis(unsigned broj) {
    int vel = sizeof ( unsigned ) * 8; // vel = 32
    unsigned int maska; // 100...0
    for ( maska = 1 << vel - 1; maska != 0; maska >>= 1 )
        putchar( maska & broj ? '1': '0');
    putchar('\n'); }


int main() {
    unsigned a = 123456789; ispis(a);
    //                          9876543210
    //a = 00000111010110111100110100010101

/*
    1. postavi na 1 n-ti bit
    2. postavi na 0 n-ti bit
    3. promeni n-ti bit
    4. pomnozi broj sa 2 na n
    5. podeli broj sa 2 na n
    6. da li je broj nepar?
    7. da li su dva broja ista?
    8. inkrement
    9. dekrement
    10. promena znaka
    11. swap(a, b)
*/
    int n = 10;    
    ispis(a | ( 1 << n )); // n-ti bit na 1
    ispis(a & ~( 1 << n )); // n-ti bit na 0
    ispis(a ^ ( 1 << n )); // flip n-ti bit

    int x = 1000; n = 10; 
    //ispis( x << n );
    printf("%d\n", x << n);
    //ispis( x >> 2 );
    printf("%d\n", x >> 2);

    if (a & 1) printf("nepar\n");
    //if (a++ & 1) printf("nepar\n");

    int x1 = 5, x2 = 15;
    if ( x1 ^ x2 ) printf("nisu\n");

    if ( !(x1 ^ x2) ) printf("jesu\n"); else printf("nisu\n");
    if ( !(x1 ^ x1) ) printf("jesu\n"); else printf("nisu\n"); 

    //broj++
    int broj = 10;
    printf("%d\n", -~broj);

    //broj--
    printf("%d\n", ~-broj);

    //broj * (-1)
    printf("%d\n", ~broj + 1); // PK je NK + 1

    printf("%d %d\n", x1, x2);
    x1 ^= x2;
    x2 ^= x1;
    x1 ^= x2;
    printf("%d %d\n", x1, x2);

    
    return 0; }