/*
[H] Write C programs for the following:

(a) Ramesh’s basic salary is input through the keyboard. His
dearness allowance is 40% of basic salary, and house rent
allowance is 20% of basic salary. Write a program to calculate
his gross salary.

(b) The distance between two cities (in km.) is input through the
keyboard. Write a program to convert and print this distance
in meters, feet, inches and centimeters
*/

#include<stdio.h>

int main() {
/*
<_______ Code for a ... _______>
    float salary;
    printf("Enter Salary:\n");
    scanf("%f", &salary);
    float dearness = 0.4 * salary;
    float rent = 0.2 * salary;
    printf("Ramesh's gross salary is: %.2f", salary + dearness + rent);
*/


    // Code for b ...
    float distance;
    printf("Enter Distance:\n");
    scanf("%f", &distance);

    float meters = distance * 1000;
    float feet = distance * 3280.84;
    float inches = distance * 39370.1;
    float centimeters = distance * 100000;

    printf("Your Distance in Meters, Feet, Inches, Centimeters:\n");
    printf("Meters: %.2fm\nFeet: %.2fm\nInches: %.2fi\nCentimeters: %.2fcm\n", meters, feet, inches, centimeters);

    return 0;
}