#include <stdio.h>
#include <math.h>

int main() {
     double t = 0.3, t2 = 0.1, c = 1.0;
     //if ( 0.3 * 3 + 0.1 == 1.0 )
     if ( t * 3 + t2 == c ) printf("jeste\n");
     else printf("nije\n");

     printf("%lf\n%lf\n%lf\n", t, t2, c);
     printf("%.15lf\n%.15lf\n%.15lf\n", t, t2, c);
     printf("%.30lf\n%.30lf\n%.30lf\n", t, t2, c);

    
     if ( fabs(t * 3 + t2 - c) < 1e-9) printf("jeste\n");
     else printf("nije\n");     
     }