/*
[A] What would be the output of the following programs:

(a) main( ) {
        int a = 300, b, c ;
        if ( a >= 400 )
        b = 300 ;
        c = 200 ;
        printf ( "\n%d %d", b, c ) ;
    }

(b) main( ) {
        int a = 500, b, c ;
        if ( a >= 400 )
        b = 300 ;
        c = 200 ;
        printf ( "\n%d %d", b, c ) ;
    }

(c) main( ) {
        int x = 10, y = 20 ;
        if ( x == y ) ;
            printf ( "\n%d %d", x, y ) ;
    }

(d) main( ) {
        int x = 3, y = 5 ;
        if ( x == 3 )
            printf ( "\n%d", x ) ;
        else ;
            printf ( "\n%d", y ) ;
    }

(e) main( ) {
        int x = 3 ;
        float y = 3.0 ;
        if ( x == y )
            printf ( "\nx and y are equal" ) ;
        else
            printf ( "\nx and y are not equal" ) ;
    }

(f) main( ) {
        int x = 3, y, z ;
        y = x = 10 ;
        z = x < 10 ;
        printf ( "\nx = %d y = %d z = %d", x, y, z ) ;
    }

(g) main( ) {
        int k = 35;
        int a = (k == 35);
        int b = (k = 50);
        int c = (k > 40);
        printf("\n%d %d %d", a, b, c);
    }

(h) main( ) {
        int i = 65 ;
        char j = ‘A’ ;
        if ( i == j )
            printf ( “C is WOW” ) ;
        else
            printf( "C is a headache" ) ;
    }

(i) main( ) {
        int a = 5, b, c ;
        b = a = 15 ;
        c = a < 15 ;
        printf ( "\na = %d b = %d c = %d", a, b, c ) ; 
    }

(j) main( ) {
        int x = 15 ;
        printf ( "\n%d %d %d", x != 15, x = 20, x < 30 ) ;
    }

*/

#include<stdio.h>

int main() {

    printf("The output of a: \"Garbage Value\" 200 \n");
    printf("The output of b: 300 200 \n");
    printf("The output of c: 10 20 \n");
    printf("The output of d: 3 5 \n");
    printf("The output of e: x and y are equal \n");
    printf("The output of f: x = 10 y = 10 z = 0 \n");
    printf("The output of g: x = 1 50 1 \n");
    printf("The output of h: C is Wow \n");
    printf("The output of i: a = 15 b = 15 c = 0 \n");
    printf("The output of j: 1 20 1 \n");

    return 0;
}