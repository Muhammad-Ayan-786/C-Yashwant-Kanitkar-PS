/*
[H] Write C programs for the following:

(a) Ramesh’s basic salary is input through the keyboard. His dearness allowance is 40% of basic salary, and house rent allowance is 20% of basic salary. Write a program to calculate
his gross salary.

(b) The distance between two cities (in km.) is input through the keyboard. Write a program to convert and print this distance in meters, feet, inches and centimeters

(c) If the marks obtained by a student in five different subjects are input through the keyboard, find out the aggregate marks and percentage marks obtained by the student. Assume that the maximum marks that can be obtained by a student in each
subject is 100.

(d) Temperature of a city in Fahrenheit degrees is input through the keyboard. Write a program to convert this temperature into Centigrade degrees.

(e) The length & breadth of a rectangle and radius of a circle are input through the keyboard. Write a program to calculate the area & perimeter of the rectangle, and the area & circumference of the circle.

(f) Two numbers are input through the keyboard into two locations C and D. Write a program to interchange the contents of C and D.

(g) If a five-digit number is input through the keyboard, write a program to calculate the sum of its digits.

(i) If a four-digit number is input through the keyboard, write a program to obtain the sum of the first and last digit of this number.

(j) In a town, the percentage of men is 52. The percentage of total literacy is 48. If total percentage of literate men is 35 of the total population, write a program to find the total number of illiterate men and women if the population of the town is 80,000.

(k) A cashier has currency notes of denominations 10, 50 and 100. If the amount to be withdrawn is input through the keyboard in hundreds, find the total number of currency notes of each denomination the cashier will have to give to the withdrawer.

(l) If the total selling price of 15 items and the total profit earned on them is input through the keyboard, write a program to find the cost price of one item. 

*/

#include <stdio.h>

int main() {

    // <_______ Code for a ... _______>
    float salary;
    printf("Enter Salary:\n");
    scanf("%f", &salary);

    float dearness = 0.4 * salary;
    float rent = 0.2 * salary;

    printf("Ramesh's gross salary is: %.2f", salary + dearness + rent);
    
    // <_______ Code for b ... _______>
    float distance;
    printf("Enter Distance:\n");
    scanf("%f", &distance);

    float meters = distance * 1000;
    float feet = meters * 3.28084;
    float inches = feet * 12;
    float centimeters = distance * 100000;

    printf("Your Distance in Meters, Feet, Inches, Centimeters:\n");
    printf("Meters: %.2f m\nFeet: %.2f f\nInches: %.2f i\nCentimeters: %.2f cm\n", meters, feet, inches, centimeters);

    // <_______ Code for c ... _______>
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

    // <_______ Code for d ... _______>
    float fahrenheit;
    printf("Enter Fahrenheit to convert it into Celsius: ");
    scanf("%f", &fahrenheit);

    float celsius = ((5.0 / 9.0) * (fahrenheit - 32));

    printf("The Celsius is: %.2f", celsius);

    // <_______ Code for e ... _______>
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

    // <_______ Code for f ... _______>
    int c, d, temp;
    printf("Enter the number for C & D\n");
    scanf("%d %d", &c, &d);

    printf("C: %d\tD: %d\n", c, d);

    temp = c;
    c = d;
    d = temp;

    printf("C: %d\tD: %d\n", c, d);

    // <_______ Code for g ... _______>
    int num, sum_no = 0;
    printf("Enter 5 numbers:\n");

    for (int i = 0; i < 5; i++) {
        printf("%d -> ", i + 1);
        scanf("%d", &num);
        sum_no += num;
    }

    printf("The total sum of the numbers are %d\n", sum_no);

    // <_______ Code for h ... _______>
    int n, reminder, reversed_no = 0;
    printf("Enter the number to reverse it - ");
    scanf("%d", &n);

    while (n != 0) {
        reminder = n % 10;
        reversed_no = (reversed_no * 10) + reminder;
        n = n / 10;
    }

    printf("Reversed Number - %d", reversed_no);

    // <_______ Code for i ... _______>
    int number, last_num, first_num, sum_num;
    printf("Enter four digit number: ");
    scanf("%d", &number);

    last_num = number % 10;

    while (number > 0) {
        first_num = number % 10;
        number = number / 10;
    }

    sum_num = first_num + last_num;

    printf("Sum of First no [%d] and Last no [%d] : %d", first_num, last_num, sum_num);

    // <_______ Code for j ... _______>
    float
        total_population,
        total_literacy,
        men, women,
        literate_men,
        literate_women,
        illiterate_men,
        illiterate_women;

    total_population = 80000.00;
    men = 0.52 * 80000.00;
    women = 0.48 * 80000.00;

    total_literacy = 0.48 * 80000.00;  // (men + women who can read/write)
    literate_men = 0.35 * 80000.00;

    // literate_women (Find)
    // illiterate_men (Find)
    // illiterate_women (Find)

    literate_women = total_literacy - literate_men;
    illiterate_men = men - literate_men;
    illiterate_women = women - literate_women;

    printf("Illiterate Men: %.2f\n", illiterate_men);
    printf("Illiterate Women: %.2f\n", illiterate_women);

    // <_______ Code for k ... _______>
    int withdraw;
    printf("Enter the amount to withdraw: ");
    scanf("%d", &withdraw);

    int hundreds, fiftys, tens;
    int remaining_after_100s, remaining_after_50s;

    hundreds = withdraw / 100;
    remaining_after_100s = withdraw % 100;

    fiftys = remaining_after_100s / 50;
    remaining_after_50s = remaining_after_100s % 50;

    tens = remaining_after_50s / 10;

    printf("100s: %d\n50s: %d\n10s: %d\n", hundreds, fiftys, tens);

    // <_______ Code for l ... _______>
    int sellingPrice, profit;
    printf("Enter the selling price of 15 items: ");
    scanf("%d", &sellingPrice);
    printf("Enter only the total profit: ");
    scanf("%d", &profit);

    float costPrice = (sellingPrice - profit) / 15.0;

    printf("Cost price of one item: %.2f", costPrice);

    return 0;
}