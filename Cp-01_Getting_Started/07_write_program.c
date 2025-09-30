/*
[H] Write C programs for the following:

(a) Ramesh’s basic salary is input through the keyboard. His dearness allowance is 40% of basic salary, and house rent allowance is 20% of basic salary. Write a program to calculate
his gross salary.

(b) The distance between two cities (in km.) is input through the keyboard. Write a program to convert and print this distance in meters, feet, inches and centimeters

(c) If the marks obtained by a student in five different subjects are input through the keyboard, find out the aggregate marks and percentage marks obtained by the student. Assume that the maximum marks that can be obtained by a student in each
subject is 100.

(d) Temperature of a city in Fahrenheit degrees is input through the keyboard. Write a program to convert this temperature into Centigrade degrees.

(e) The length & breadth of a rectangle and radius of a circle are input through the keyboard. Write a program to calculate the area & perimeter of the rectangle, and the area & circumference of the circle. 

*/

#include <stdio.h>

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

    /*
    <_______ Code for b ... _______>
        float distance;
        printf("Enter Distance:\n");
        scanf("%f", &distance);

        float meters = distance * 1000;
        float feet = meters * 3.28084;
        float inches = feet * 12;
        float centimeters = distance * 100000;

        printf("Your Distance in Meters, Feet, Inches, Centimeters:\n");
        printf("Meters: %.2f m\nFeet: %.2f f\nInches: %.2f i\nCentimeters: %.2f cm\n", meters, feet, inches, centimeters);
    */

    /*
    <_______ Code for c ... _______>
        int marks, aggregate_marks = 0;
        float percentage;

        for (int i = 0; i < 5; i++) {
            printf("Give the marks of %d subject: ", i + 1);
            scanf("%d", &marks);

            aggregate_marks += marks;
        }

        percentage = (aggregate_marks / 500.0) * 100.0;

        printf("The Aggregate Marks: %d\n", aggregate_marks);
        printf("The Percentage Marks: %.2f\n", percentage);
    */

    /*
    <_______ Code for d ... _______>
        float fahrenheit;
        printf("Enter Fahrenheit to convert it into Celsius: ");
        scanf("%f", &fahrenheit);

        float celsius = ((5.0 / 9.0) * (fahrenheit - 32));

        printf("The Celsius is: %.2f", celsius);
    */

    /*
    <_______ Code for e ... _______>
        int length, breath;
        float radius;
        printf("Enter: 1)Length  2)Breath  3)Raduis\n");
        scanf("%d %d %f", &length, &breath, &radius);

        int area_rect = length * breath;
        int perimeter_rect = 2 * (length * breath);

        float area_circle = 3.14 * (radius * radius);
        float circumference_circle = 2 * 3.14 * radius;

        printf("The Area of a Rectangle: %d\nThe Perimeter of a Rectangle: %d\n", area_rect, perimeter_rect);
        printf("The Area of a Circle: %.2f\nThe Circumference of a Circle: %.2f\n", area_circle, circumference_circle);
    */

    return 0;
}