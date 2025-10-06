/*
[C] Attempt the following:

(a) If cost price and selling price of an item is input through the keyboard, write a program to determine whether the seller has made profit or incurred loss. Also determine how much profit he made or loss he incurred.

(b) Any integer is input through the keyboard. Write a program to find out whether it is an odd number or even number.

(c) Any year is input through the keyboard. Write a program to determine whether the year is a leap year or not.
(Hint: Use the % (modulus) operator)

(d) According to the Gregorian calendar, it was Monday on the date 01/01/1900. If any year is input through the keyboard write a program to find out what is the day on 1st January of this year.

*/

#include <stdio.h>

int main() {
    /*
    // <_______ Code for a ... _______>
        float CP, SP, Amount;
        printf("First enter Cost-price & then Selling-price: \n");
        scanf("%f %f", &CP, &SP);

        if (SP > CP) {
            Amount = SP - CP;
            printf("You made a profit of %.2f", Amount);
        } else if (SP < CP) {
            Amount = CP - SP;
            printf("You made a loss of %.2f", Amount);
        } else {
            printf("Cost-Price: %.2f\nSelling-Price: %.2f\n", CP, SP);
            printf("You made no profit, no loss.");
        }
    */

    /*
    // <_______ Code for b ... _______>
        int intNum;
        printf("Enter any integer number: ");
        scanf("%d", &intNum);

        if (intNum % 2 == 0) {
            printf("Your number is EVEN");
        } else {
            printf("Your number is ODD");
        }
    */

    /*
    // <_______ Code for c ... _______>
        int year;
        printf("Enter year: ");
        scanf("%d", &year);    

        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
            printf("Your year '%d' is a leap year.\n", year);
        } else {
            printf("Your year '%d' is not a leap year.\n", year);
        }
    */

    // <_______ Code for d ... _______>


    return 0;
}