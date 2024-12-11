#include <stdio.h>
// Number Systems in C

int main() {
    // base = 10 -> char, octa (b = 8), hex (b = 16)

    char c = 48; // ASCII za 0
    printf("%c %d %o %x\n", c, c, c, c);
    // ascii 0, 48, 60 - 6*8 = 48, 30 - 3*16
    char cc = 64;
    printf("%c %d %o %x\n", cc, cc, cc, cc); // @

    char jdt = 123;
    printf("123: D. %d Okt. %o Hex. %x Hex. %X\n", jdt, jdt, jdt, jdt);


    // hex, oct, bin -> dec
    int heksa = 0x2f; // 2*16+15
    int okta = 057; // 5*8+7
    int bin = 0b00101111;
    printf("%d %d %d\n", heksa, okta, bin); //
    
    return 0; 

    
    
    }