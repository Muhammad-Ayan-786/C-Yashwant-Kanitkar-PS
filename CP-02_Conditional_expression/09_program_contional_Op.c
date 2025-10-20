/*
[I] Rewrite the following programs using conditional operators.

(a) main( ) {
        int x, min, max ;
        scanf ( "\n%d %d", &max, &x ) ;
        if ( x > max )
            max = x ;
        else
            min = x ;
    }

(b) main( ) {
        int code ;
        scanf ( "%d", &code ) ;
        if ( code > 1 )
            printf ( "\nJerusalem" ) ;
        else if ( code < 1 )
            printf ( "\nEddie" ) ;
        else
            printf ( "\nC Brain" ) ;
    }

(c) main( ) {
        float sal ;
        printf ("Enter the salary" ) ;
        scanf ( "%f", &sal ) ;
        if ( sal < 40000 && sal > 25000 )
            printf ( "Manager" ) ;
        else if ( sal < 25000 && sal > 15000 )
            printf ( "Accountant" ) ;
        else
            printf ( "Clerk" ) ;
    }
*/

#include<stdio.h>

int main() {
    // Code for a ...
    int x, min, max;
    scanf("%d %d", &max, &x);

    (x > max) ? (max = x) : (min = x);

    printf("Max = %d\n", max);
    printf("Min = %d\n", min);

    // Code for b ...
    int code ;
    scanf ( "%d", &code ) ;

    (code > 1) 
    ? printf("Jerusalem") 
    : (code < 1) 
        ? printf("Eddie") 
        : printf("C Brain");

    // Code for c ...
    float sal ;
    printf ("Enter the salary" ) ;
    scanf ( "%f", &sal ) ;

    (sal < 40000 && sal > 25000) ?
        (printf("Manager \n")) :
        ( 
            (sal < 25000 && sal > 15000) ?
            printf("Accountant \n") :
            printf("Clerk \n")
        );

    return 0;
}