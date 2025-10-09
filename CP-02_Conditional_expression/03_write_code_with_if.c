/*
[C] Attempt the following:

(a) If cost price and selling price of an item is input through the keyboard, write a program to determine whether the seller has made profit or incurred loss. Also determine how much profit he made or loss he incurred.

(b) Any integer is input through the keyboard. Write a program to find out whether it is an odd number or even number.

(c) Any year is input through the keyboard. Write a program to determine whether the year is a leap year or not.
(Hint: Use the % (modulus) operator)

(d) According to the Gregorian calendar, it was Monday on the date 01/01/1900. If any year is input through the keyboard write a program to find out what is the day on 1st January of this year.

(e) A five-digit number is entered through the keyboard. Write a program to obtain the reversed number and to determine whether the original and reversed numbers are equal or not.

(f) If the ages of Ram, Shyam and Ajay are input through the keyboard, write a program to determine the youngest of the three.

(g) Write a program to check whether a triangle is valid or not, when the three angles of the triangle are entered through the keyboard. A triangle is valid if the sum of all the three angles is equal to 180 degrees.

(h) Find the absolute value of a number entered through the keyboard.

(i) Given the length and breadth of a rectangle, write a program to find whether the area of the rectangle is greater than its perimeter. For example, the area of the rectangle with length = 5 and breadth = 4 is greater than its perimeter.

(j) Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line.

(k) Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0).
*/

#include <stdio.h>

int main() {

    // <_______ Code for a ... _______>
    float CP, SP, Amount;
    printf("First enter Cost-price & then Selling-price: \n");
    scanf("%f %f", &CP, &SP);

    if (SP > CP) {
        Amount = SP - CP;
        printf("You made a profit of %.2f \n", Amount);
    }
    else if (SP < CP) {
        Amount = CP - SP;
        printf("You made a loss of %.2f \n", Amount);
    }
    else {
        printf("Cost-Price: %.2f\nSelling-Price: %.2f\n", CP, SP);
        printf("You made no profit, no loss. \n");
    }

    // <_______ Code for b ... _______>
    int intNum;
    printf("Enter any integer number: ");
    scanf("%d", &intNum);

    if (intNum % 2 == 0) {
        printf("Your number is EVEN \n");
    }
    else {
        printf("Your number is ODD \n");
    }

    // <_______ Code for c ... _______>
    int year;
    printf("Enter year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("Your year '%d' is a leap year. \n", year);
    }
    else {
        printf("Your year '%d' is not a leap year. \n", year);
    }

    // <_______ Code for d ... _______>
    int userYear;
    printf("Enter year: ");
    scanf("%d", &userYear);

    int givenYear = 1900;
    int difference = userYear - givenYear;

    int leapYear = difference / 4;
    int nonleapYear = difference - leapYear;

    int days = (leapYear * 366) + (nonleapYear * 365) + 1;

    if (days % 7 == 0)
    {
        printf("The first day on %d was Sunday \n", userYear);
    }
    else if (days % 7 == 1)
    {
        printf("The first day on %d was Monday \n", userYear);
    }
    else if (days % 7 == 2)
    {
        printf("The first day on %d was Tuesday \n", userYear);
    }
    else if (days % 7 == 3)
    {
        printf("The first day on %d was Wednesday \n", userYear);
    }
    else if (days % 7 == 4)
    {
        printf("The first day on %d was Thusday \n", userYear);
    }
    else if (days % 7 == 5)
    {
        printf("The first day on %d was Friday \n", userYear);
    }
    else {
        printf("The first day on %d was Saturday \n", userYear);
    }

    // <_______ Code for e ... _______>
    int userNum, reminder;
    printf("Enter a number: ");
    scanf("%d", &userNum);

    int checkNum = userNum;

    int reverseNum = 0;

    while (checkNum != 0) {
        reminder = checkNum % 10;
        reverseNum = (reverseNum * 10) + reminder;
        checkNum = checkNum / 10;
    }

    printf("Reverse Number: %d \n", reverseNum);

    if (userNum == reverseNum) {
        printf("The number is palindromic (reads the same forwards and backwards). \n");
    }
    else {
        printf("The number is not palindromic. (does not reads the same forwards and backwards) \n");
    }

    // <_______ Code for f ... _______>
    int Ram, Shyam, Ajay;
    printf("Enter the age of Ram: ");
    scanf("%d", &Ram);
    printf("Enter the age of Shyam: ");
    scanf("%d", &Shyam);
    printf("Enter the age of Ajay: ");
    scanf("%d", &Ajay);

    if ((Ram == Shyam && Ram == Ajay) && (Shyam == Ram && Shyam == Ajay) && (Ajay == Ram && Ajay == Shyam)) {
        printf("They all are same ages. \n");
    }

    if (Ram < Shyam && Ram < Ajay) {
        printf("Ram is youngest. \n");
    }
    else if (Shyam < Ram && Shyam < Ajay) {
        printf("Shyam is youngest. \n");
    }
    else if (Ajay < Ram && Ajay < Shyam) {
        printf("Ajay is youngest. \n");
    }

    // <_______ Code for g ... _______>
    int angle1, angle2, angle3;
    printf("Enter the angles of triangle. \n");
    printf("angle 1: ");
    scanf("%d", &angle1);
    printf("angle 2: ");
    scanf("%d", &angle2);
    printf("angle 3: ");
    scanf("%d", &angle3);

    int triangle = angle1 + angle2 + angle3;
    printf("The sum of triangle: %d \n", triangle);

    if ((angle1 + angle2 + angle3) == 180) {
        printf("The triangle is valid. \n");
    }
    else {
        printf("The triangle is not valid. \n");
    }

    // <_______ Code for h ... _______>
    int num;
    printf("Enter a num: ");
    scanf("%d", &num);

    if (num < 0) {
        num = num * -1;
        printf("Your absolute number is %d \n", num);
    }
    else {
        printf("Your number is %d \n", num);
    }

    // <_______ Code for i ... _______>
    int length = 5, breath = 4;
    int area = length * breath;
    int perimeter = 2 * (length + breath);

    if (area > perimeter) {
        printf("The area of a rectangle is greater than its perimeter. \n");
    }
    else if (area == perimeter) {
        printf("Both the perimeter and area are equal");
    }
    else {
        printf("The perimeter of a rectangle is greater than its area. \n");
    }

    // <_______ Code for j ... _______>
    int x1, x2, x3;
    int y1, y2, y3;

    printf("Enter x1 and y1: ");
    scanf("%d %d", &x1, &y1);
    printf("Enter x2 and y2: ");
    scanf("%d %d", &x2, &y2);
    printf("Enter x3 and y3: ");
    scanf("%d %d", &x3, &y3);

    float slope1 = (float)(y2 - y1) / (x2 - x1);
    float slope2 = (float)(y3 - y2) / (x3 - x2);

    if (slope1 == slope2) {
        printf("If slopes are equal -> same line \n");
    }
    else {
        printf("If slopes are different -> not on the same line \n");
    }

    // <_______ Code for k ... _______>
    int coordinate_x, coordinate_y;
    printf("Enter the coordinate of x and then for y: ");
    scanf("%d %d", &coordinate_x, &coordinate_y);

    if ((coordinate_x == 0) && (coordinate_y == 0)) {
        printf("The point is at the origin \n");
    }
    else if (coordinate_y == 0) {
        printf("The point is on the x-axis \n");
    }
    else if (coordinate_x == 0) {
        printf("The point is on the y-axis \n");
    }
    else {
        printf("The point is somewhere else on the plane \n");
    }

    return 0;
}