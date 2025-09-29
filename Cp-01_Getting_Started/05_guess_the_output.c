/*
[F] What would be the output of the following programs:
(a) main( ) { 
        int i = 2, j = 3, k, l ;
        float a, b ;
        k = i / j * j ;
        l = j / i * i ;
        a = i / j * j ;
        b = j / i * i ;
        printf( "%d %d %f %f", k, l, a, b ) ;
    }

    <===== Working out =====>
    l = 3 / 2 * 2   k = 2 / 3 * 3   a = 2 / 3 * 3   b = 3 / 2 * 2
    l = 1 * 2       k = 0 * 3       a = 0 * 3       b = 1 * 2
    l = 2           a = 0           b = 2

(b) main( ) {
        int a, b ;
        a = -3 - - 3 ;
        b = -3 - - ( - 3 ) ;
        printf ( "a = %d b = %d", a, b ) ;
    }

(c) main( ) {
        float a = 5, b = 2 ;
        int c ;
        c = a % b ;
        printf ( "%d", c ) ;
    }

(d) main( ) {
        printf ( "nn \n\n nn\n" ) ;
        printf ( "nn /n/n nn/n" ) ;
    }

(e) main( ) {
        int a, b ;
        printf ( "Enter values of a and b" ) ;
        scanf ( " %d %d ", &a, &b ) ;
        printf ( "a = %d b = %d", a, b ) ;
    }

(f) main( ) {
        int p, q ;
        printf ( "Enter values of p and q" ) ;
        scanf ( " %d %d ", p, q ) ;
        printf ( "p = %d q =%d", p, q ) ;
    }

*/

#include<stdio.h>

int main() {

    printf("Output for a is: 0 2 0.000000 2.000000    \n");

    printf("Output for b is: a = 0 , b = -6    \n");

    printf("Output for c is: error: invalid operands to binary %% (have 'float' and 'float'    \n");

    printf("Output for d is: nn next line (x2). One space and n and next line. nn /n/n nn/n    \n");

    printf("Output for e is: Whatever value the user is going to put, it will display.    \n");

    printf("Output for f is: The code will only take the input and not going to print the output, because the scanf doesn't have the address operator (&).    \n");


    return 0;
}