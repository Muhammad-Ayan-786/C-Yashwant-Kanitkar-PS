/*
[G] What would be the output of the following programs:

(a) main( ) {
        int i = -4, j, num ;
        j = ( num < 0 ? 0 : num * num ) ;
        printf ( "\n%d", j ) ;
    }

(b) main( ) {
        int k, num = 30 ;
        k = ( num > 5 ? ( num <= 10 ? 100 : 200 ) : 500 ) ;
        printf ( "\n%d", num ) ;
    }

(c) main( ) {
        int j = 4 ;
        ( !j != 1 ? printf ( "\nWelcome") : printf ( "\nGood Bye") ) ; 
    }
*/

#include<stdio.h>

int main() {
    printf("1) The variable num is uninitialized, so the behavior is undefined. It might print 0 or any garbage value — you cannot rely on the output. \n");

    printf("2) 30 \n");

    printf("3) Welcome \n");

    return 0;
}