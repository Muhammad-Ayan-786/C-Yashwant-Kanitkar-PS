/*
[J] Attempt the following:

(a) Using conditional operators determine:

    (1) Whether the character entered through the keyboard is a
    lower case alphabet or not.

    (2) Whether a character entered through the keyboard is a
    special symbol or not.

(b) Write a program using conditional operators to determine whether a year entered through the keyboard is a leap year or not.

(c) Write a program to find the greatest of the three numbers entered through the keyboard using conditional operators.
*/

#include<stdio.h>

int main() {
    // Code of a1 ...
    char ch1;
    printf("Enter character: ");
    scanf("%c", &ch1);

    (ch1 >= 97) ? printf("Lowercase") : printf("Uppercase");


    // Code of a2 ...
    char ch2;
    printf("Enter character: ");
    scanf("%c", &ch2);

    ((ch2 >= 33 && ch2 <= 47) || (ch2 >= 58 && ch2 <= 64) ||
    (ch2 >= 91 && ch2 <= 96) || (ch2 >= 123 && ch2 <= 126)) ?
    printf("Special symbol") : printf("Not special symbol") ;


    // Code of b ...
    int year;
    printf("Enter year ");
    scanf("%d", &year);
    
    (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0)) ? 
        printf("Leap year") : 
        printf("Not a leap year");
    

    // Code of c
    int a, b, c;
    printf("Enter a, b, c : ");
    scanf("%d %d %d", &a, &b, &c);

    (a > b && a > c) ?
        printf("a is the greatest") :
        (b > c) ?
            printf("b is the greatest") :
            printf("c is the greatest") ;


    return 0;
}