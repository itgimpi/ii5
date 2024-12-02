#include<stdio.h>

int main() {
    char c = 5;
    int a = 10;
    long long l = 15;

    char *pc; /* pointer to char type */
    int* pa; /* pointer to int type */
    long long * pl; /* pointer to ll type */

    pc = &c; // pc is address of c, pc is pointer to c
    pa = &a; // p is address of a
    pl = &l;


    printf("%i %i %i", c, a, l);
    printf("%p %p %p", pc, pa, pl);
    return 0;
}