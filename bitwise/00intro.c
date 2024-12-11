#include <stdio.h>

// Logical Operators: ! (ne), && (i), || (ili)
// Bitwise Operators: ~ (ne), & (i), | (ili), ^ (xor) 

int main() {
    int x = 2, y = 5;
    
    printf("%d %d\n", x, y); // 2 5 ( x is true, y is true )
    printf("%d %d\n", !x, !y); // 0 0 ( !x is false, !y is false )
    printf("%d\n", x && y); // 1 ( T i T = T )
    printf("%d\n", x && (!y)); // 0 ( T i N = N )
    printf("%d\n", x || y); // 1 ( T ili T = T )
    printf("%d\n", !x || !y); // 0 ( N ili N = N )

    for ( int p = 0; p < 2; p++ ) // p je N, T
        for ( int q = 0; q < 2; q++ )
            printf("%d i %d je %d\n", p, q, p && q);
    printf("\n");

    for ( int p = 0; p < 2; p++ ) // p je N, T
        for ( int q = 0; q < 2; q++ )
            printf("%d ili %d je %d\n", p, q, p || q);

    //int x = 2, y = 5;

    printf("%d\n", x & y); // 0 ( 0010 i 0101 je 0000 )
    printf("%d\n", x | y); // 7 ( 0010 ili 0101 je 0111 )   // 0010
                                                            // 0101
                                                            // 0111 ili
    printf("%d\n", ~x); // -3 ( ~0...0010 je 1...1101 a to je -3  )
    printf("%d\n", x ^ y); // 7 ( 0010 xor 0101 je 0111, xor su razliciti bitovi )
    
    // => Log. and Bit. operatori are NOT the same
    
    return 0; 

    
    
    }