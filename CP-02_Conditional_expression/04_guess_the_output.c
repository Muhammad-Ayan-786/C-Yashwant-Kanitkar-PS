/*
(a) main( ) {
        int i = 4, z = 12 ;
        if ( i = 5 || z > 50 )
            printf ( "\nDean of students affairs" ) ;
        else
            printf ( "\nDosa" ) ;
    }

(b) main( ) {
        int i = 4, z = 12 ; 
        if ( i = 5 && z > 5 )
            printf ( "\nLet us C" ) ;
        else
            printf ( "\nWish C was free !" ) ;
    }

(c) main( ) {
        int i = 4, j = -1, k = 0, w, x, y, z ;
        w = i || j || k ;
        x = i && j && k ;
        y = i || j && k ;
        z = i && j || k ;
        printf ( "\nw = %d x = %d y = %d z = %d", w, x, y, z ) ;
    }

(d) main( ) {
        int i = 4, j = -1, k = 0, y, z ;
        y = i + 5 && j + 1 || k + 2 ;
        z = i + 5 || j + 1 && k + 2 ;
        printf ( "\ny = %d z = %d", y, z ) ;
    }

(e) main( ) {
        int i = -3, j = 3 ;
        if ( !i + !j * 1 )
            printf ( "\nMassaro" ) ;
        else
            printf ( "\nBennarivo" ) ;
    }

(f) main( ) {
        int a = 40 ;
        if ( a > 40 && a < 45 )
            printf ( "a is greater than 40 and less than 45" ) ;
        else
            printf ( "%d", a ) ;
    }

(g) main( ) {
        int p = 8, q = 20 ;
        if ( p == 5 && q > 5 )
            printf ( "\nWhy not C" ) ;
        else
            printf ( "\nDefinitely C !" ) ;
    }

(h) main( ) {
        int i = -1, j = 1, k ,l ;
        k = i && j ;
        l = i || j ;
        printf ( "%d %d", l, j ) ;
    }

(i) main( ) {
        int x = 20 , y = 40 , z = 45 ;
        if ( x > y && x > z )
            printf( "x is big" ) ;
        else if ( y > x && y > z )
            printf( "y is big" ) ;
        else if ( z > x && z > y )
            printf( "z is big" ) ;
    }

(j) main( ) {
        int i = -1, j = 1, k ,l ;
        k = !i && j ;
        l = !i || j ;
        printf ( "%d %d", i, j ) ;
    }

(k) main( ) {
        int j = 4, k ;
        k = !5 && j ;
        printf ( "\nk = %d", k ) ;
    }

*/

#include<stdio.h>

int main() {

    printf("a): Dean of students affairs \n");
    printf("b): Let us C \n");
    printf("c): w = 1 x = 0 y = 1 z = 1 \n");
    printf("d): y = 1 z = 1 \n");
    printf("e): Bennarivo \n");
    printf("f): 40 \n");
    printf("g): Definitely C \n");
    printf("h): 1 1 \n");
    printf("i): z is big \n");
    printf("j): -1 1 \n");
    printf("k): 0 \n");

    return 0;
}