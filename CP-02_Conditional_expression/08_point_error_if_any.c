/*
[H] Point out the errors, if any, in the following programs:

(a) main( ) {
        int tag = 0, code = 1 ;
        if ( tag == 0 )
            ( code > 1 ? printf ( "\nHello" ) ? printf ( "\nHi" ) ) ;
        else
            printf ( "\nHello Hi !!" ) ;
    }

(b) main( ) {
        int ji = 65 ;
        printf ( "\nji >= 65 ? %d : %c", ji ) ;
    }

(c) main( ) {
        int i = 10, j ;
        i >= 5 ? ( j = 10 ) : ( j = 15 ) ;
        printf ( "\n%d %d", i, j ) ;
    }

(d) main( ) {
        int a = 5 , b = 6 ;
        ( a == b ? printf( "%d",a) ) ;
    }

(e) main( ) {
        int n = 9 ;
        ( n == 9 ? printf( "You are correct" ) ; : printf( "You are wrong" ) ;) ;
    }

(f) main( ) {
        int kk = 65 ,ll ;
        ll = ( kk == 65 : printf ( "\n kk is equal to 65" ) : printf ( "\n kk is not equal to 65" ) ) ;
        printf( "%d", ll ) ;
    }

(g) main( ) {
        int x = 10, y = 20 ;
        x == 20 && y != 10 ? printf( "True" ) : printf( "False" ) ;
    }
*/

#include<stdio.h>

int main() {
    printf("Problem a have an error. \n");
    printf("Problem d have an error. \n");
    printf("Problem f have an error. \n");

    return 0;
}