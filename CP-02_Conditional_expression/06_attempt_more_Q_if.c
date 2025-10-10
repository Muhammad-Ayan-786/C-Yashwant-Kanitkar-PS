/*
[F] Attempt the following:

(a) Any year is entered through the keyboard, write a program to determine whether the year is leap or not. Use the logical operators && and ||



(b) Any character is entered through the keyboard, write a program to determine whether the character entered is a capital letter, a small case letter, a digit or a special symbol.

The following table shows the range of ASCII values for
various characters.

Characters          |       ASCII Values       
A - Z               |       65 - 90
a - z               |       97 - 122
0 - 9               |       48 - 57
special symbols     |       0 - 47, 58 - 64, 91 - 96, 123 - 127   



(c) An Insurance company follows following rules to calculate premium.

    (1) If a person’s health is excellent and the person is between 25 and 35 years of age and lives in a city and is a male then the premium is Rs. 4 per thousand and his policy   amount cannot exceed Rs. 2 lakhs.

    (2) If a person satisfies all the above conditions except that  the sex is female then the premium is Rs. 3 per thousand and her policy amount cannot exceed Rs. 1 lakh.

    (3) If a person’s health is poor and the person is between 25 and 35 years of age and lives in a village and is a male then the premium is Rs. 6 per thousand and his policy cannot exceed Rs. 10,000.





*/

#include<stdio.h>

int main() {

    /*
    // <_______ Code for a ... _______>
        int year;
        printf("Enter year: ");
        scanf("%d", &year);

        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            printf("Your year '%d' is a leap year. \n", year);
        }
        else {
            printf("Your year '%d' is not a leap year. \n", year);
        }
    */

    /*
    // <_______ Code for b ... _______>
    char userCharcter;
    printf("Enter any Character: ");
    scanf("%c", &userCharcter);

    if (userCharcter >= 65 && userCharcter <= 90)
    {
        printf("You have entered a Capital Case letter.");
    }
    else if (userCharcter >= 97 && userCharcter <= 122)
    {
        printf("You have entered a Small Case Letter.");
    }
    else if (userCharcter >= 48 && userCharcter <= 57)
    {
        printf("You have entered a Digit.");
    }
    else if ((userCharcter >= 0 && userCharcter <= 47) ||
            (userCharcter >= 58 && userCharcter <= 64) ||
            (userCharcter >= 91 && userCharcter <= 96) ||
            (userCharcter >= 123 && userCharcter <= 127)) 
    {
        printf("You have entered a Special Symbol.");
    }
    else {
        printf("Please enter a Character again.");
    }
    */

    // <_______ Code for c ... _______>

    return 0;
}