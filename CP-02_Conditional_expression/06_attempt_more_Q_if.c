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

    (4) In all other cases the person is not insured.

Write a program to output whether the person should be insured or not, his/her premium rate and maximum amount for which he/she can be insured. 



(d) A certain grade of steel is graded according to the following conditions:

    (i) Hardness must be greater than 50
    (ii) Carbon content must be less than 0.7
    (iii) Tensile strength must be greater than 5600

The grades are as follows:

    Grade is 10 if all three conditions are met
    Grade is 9 if conditions (i) and (ii) are met
    Grade is 8 if conditions (ii) and (iii) are met
    Grade is 7 if conditions (i) and (iii) are met
    Grade is 6 if only one condition is met
    Grade is 5 if none of the conditions are met

Write a program, which will require the user to give values of hardness, carbon content and tensile strength of the steel under consideration and output the grade of the steel. 



(e) A library charges a fine for every book returned late. For first 5 days the fine is 50 paise, for 6-10 days fine is one rupee and above 10 days fine is 5 rupees. If you return the book after 30 days your membership will be cancelled. Write a program to accept the number of days the member is late to return the book and display the fine or the appropriate message.



(f) If the three sides of a triangle are entered through the keyboard, write a program to check whether the triangle is valid or not. The triangle is valid if the sum of two sides is greater than the largest of the three sides.  



(g) If the three sides of a triangle are entered through the keyboard, write a program to check whether the triangle is isosceles, equilateral, scalene or right angled triangle. 



(h) In a company, worker efficiency is determined on the basis of the time required for a worker to complete a particular job. If the time taken by the worker is between 2 – 3 hours, then the worker is said to be highly efficient. If the time required by the worker is between 3 – 4 hours, then the worker is ordered to improve speed. If the time taken is between 4 – 5 hours, the worker is given training to improve his speed, and if the time taken by the worker is more than 5 hours, then the worker has to leave the company. If the time taken by the worker is input through the keyboard, find the efficiency of the worker.



(i) A university has the following rules for a student to qualify for a degree with A as the main subject and B as the subsidiary subject:

    (a) He should get 55 percent or more in A and 45 percent or more in B.
    (b) If he gets than 55 percent in A he should get 55 percent or more in B. However, he should get at least 45 percent in A.
    (c) If he gets less than 45 percent in B and 65 percent or more in A he is allowed to reappear in an examination in B to qualify.
    (d) In all other cases he is declared to have failed.

Write a program to receive marks in A and B and Output whether the student has passed, failed or is allowed to reappear in B. 



(j) The policy followed by a company to process customer orders is given by the following rules:

    (a) If a customer order is less than or equal to that in stock and has credit is OK, supply has requirement.
    (b) If has credit is not OK do not supply. Send him intimation.
    (c) If has credit is Ok but the item in stock is less than has order, supply what is in stock. Intimate to him data the balance will be shipped.

Write a C program to implement the company policy.

*/

#include<stdio.h>
#include<string.h>
#include<math.h>

int main() {

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

    // <_______ Code for b ... _______>
    char userCharcter;
    printf("Enter any Character: ");
    scanf("%c", &userCharcter);

    if (userCharcter >= 65 && userCharcter <= 90) {
        printf("You have entered a Capital Case letter. \n");
    }
    else if (userCharcter >= 97 && userCharcter <= 122) {
        printf("You have entered a Small Case Letter. \n");
    }
    else if (userCharcter >= 48 && userCharcter <= 57) {
        printf("You have entered a Digit. \n");
    }
    else if ((userCharcter >= 0 && userCharcter <= 47) ||
            (userCharcter >= 58 && userCharcter <= 64) ||
            (userCharcter >= 91 && userCharcter <= 96) ||
            (userCharcter >= 123 && userCharcter <= 127)) 
    {
        printf("You have entered a Special Symbol. \n");
    }
    else {
        printf("Please enter a Character again. \n");
    }

    // <_______ Code for c ... _______>

    // METHOD 1:  This is done with Char :
    int age_2;
    char health_2, residence_2, gender_2;

    printf("Enter Age: ");
    scanf("%d", &age_2);
    printf("Enter Health (e = excellent, p = poor): ");
    scanf(" %c", &health_2);
    printf("Enter Residence (c = city, v = village): ");
    scanf(" %c", &residence_2);
    printf("Enter Gender (m = male, f = female): ");
    scanf(" %c", &gender_2);

    if (age_2 >= 25 && age_2 <= 35 && health_2 == 'e' && residence_2 == 'c' && gender_2 == 'm') {
        printf("Premium = 4 per 1000\nMax Policy = 2 lakh \n");
    }
    else if (age_2 >= 25 && age_2 <= 35 && health_2 == 'e' && residence_2 == 'c' && gender_2 == 'f') {
        printf("Premium = 3 per 1000\nMax Policy = 1 lakh \n");
    }
    else if (age_2 >= 25 && age_2 <= 35 && health_2 == 'p' && residence_2 == 'v' && gender_2 == 'm') {
        printf("Premium = 6 per 1000\nMax Policy = 10 Thousand \n");
    }
    else {
        printf("No premium (invalid input). \n");
    }

    // METHOD 2:  This is done with String :
    int age;
    char health[10], residence[10], gender[10];

    printf("Enter your Age: ");
    scanf("%d", &age);
    printf("Enter your Health (excellent or poor): ");
    scanf("%s", health);
    printf("Enter your Residence (city or village): ");
    scanf("%s", residence);
    printf("Enter your Gender (male or female): ");
    scanf("%s", gender);

    if ((age >= 25 && age <= 35) && 
        (strcmp(health, "Excellent") == 0 || strcmp(health, "excellent") == 0) &&
        (strcmp(residence, "City") == 0 || strcmp(residence, "city") == 0) &&
        (strcmp(gender, "Male") == 0 || strcmp(gender, "male") == 0))
    {
        printf("Premium = 4 per 1000\nMax Policy = 2 lakh \n");
    }
    else if ((age >= 25 && age <= 35) &&
        (strcmp(health, "Excellent") == 0 || strcmp(health, "excellent") == 0) &&
        (strcmp(residence, "City") == 0 || strcmp(residence, "city") == 0) &&
        (strcmp(gender, "Female") == 0 || strcmp(gender, "female") == 0))
    {
        printf("Premium = 3 per 1000\nMax Policy = 1 lakh \n");
    }
    else if ((age >= 25 && age <= 35) &&
        (strcmp(health, "Poor") == 0 || strcmp(health, "poor") == 0) &&
        (strcmp(residence, "Village") == 0 || strcmp(residence, "village") == 0) &&
        (strcmp(gender, "Male") == 0 || strcmp(gender, "male") == 0))
    {
        printf("Premium = 6 per 1000\nMax Policy = 10 Thousand \n");
    }
    else
    {
        printf("No premium (invalid input). \n");
    }

    // <_______ Code for d ... _______>
    float hardness, tensileStrength, carbonContent;

    printf("Enter the Hardness of the Steel: ");
    scanf("%f", &hardness);

    printf("Enter the Tensile Strength of the Steel: ");
    scanf("%f", &tensileStrength);

    printf("Enter the Carbon Content of the Steel: ");
    scanf("%f", &carbonContent);

    int cond1 = (hardness > 50);
    int cond2 = (carbonContent < 0.7);
    int cond3 = (tensileStrength > 5600);

    int totalTrue = cond1 + cond2 + cond3;

    if (totalTrue == 3) {
        printf("Grade 10\n");
    }
    else if (totalTrue == 2) {
        if (cond1 && cond2) printf("Grade 9\n");
        else if (cond2 && cond3) printf("Grade 8\n");
        else if (cond1 && cond3) printf("Grade 7\n");
    }
    else if (totalTrue == 1) {
        printf("Grade 6\n");
    }
    else {
        printf("Grade 5\n");
    }

    // <_______ Code for e ... _______>
    int late_days;
    printf("Enter your extra days: ");
    scanf("%d", &late_days);

    if (late_days >= 1 && late_days <= 5) {
        printf("Your have to pay fine of 50 paise. \n");
    }
    else if (late_days >= 6 && late_days <= 10) {
        printf("Your have to pay fine of 1 rupee. \n");
    }
    else if (late_days > 10) {
        if (late_days > 10 && late_days <= 30) {
            printf("Your have to pay fine of 5 rupee. \n");
        }
        else if (late_days > 30) {
            printf("We have cancelled your membership. \n");
        }
    }
    else {
        printf("You don't have to pay any fine. \n");
    }

    // <_______ Code for f ... _______>
    int s1, s2, s3;
    printf("Enter the 3 sides of triangle: \n");
    scanf("%d %d %d", &s1, &s2, &s3);

    int sum1 = s1 + s2;
    int sum2 = s2 + s3;
    int sum3 = s3 + s1;

    if ((sum1 > s3) && (sum2 > s1) && (sum3 > s2)) {
        printf("Your Triangle is Valid. \n");     
    }
    else {
        printf("Your Triangle is not Valid. \n");
    }

    // <_______ Code for g ... _______>
    int side1, side2, side3;
    printf("Enter the 3 sides of triangle: \n");
    scanf("%d %d %d", &side1, &side2, &side3);

    if ((pow(side1, 2) + pow(side2, 2) == pow(side3, 2)) ||
        ((pow(side2, 2) + pow(side3, 2) == pow(side1, 2)) ||
        (pow(side3, 2) + pow(side1, 2) == pow(side2, 2))) )
    {
        printf("The triangle is Right angled triangle. \n");
    }
    else if ((side1 == side2) && (side1 == side3) && (side2 == side3)) {
        printf("The triangle is Equilateral. \n");
    }
    else if ((side1 == side2) || (side1 == side3) || (side2 == side3)) {
        printf("The triangle is Isosceles. \n");
    }
    else if ((side1 != side2) && (side1 != side3) && (side2 != side3)) {
        printf("The triangle is Scalene. \n");
    }

    // <_______ Code for h ... _______>
    float time;
    printf("Enter your Time: ");
    scanf("%f", &time);

    if (time >= 2.0 && time <= 3.0) {
        printf("Highly Efficient. \n");
    }
    else if (time > 3.0 && time <= 4.0) {
        printf("Improve Speed. \n");
    }
    else if (time > 4.0 && time <= 5.0) {
        printf("Training To Boost Improve Speed. \n");
    }
    else if (time > 5.0) {
        printf("Your have to Leave This Company. \n");
    }
    else {
        printf("Invalid. \n");
    }

    // <_______ Code for i ... _______>
    int sub_A, sub_B;
    printf("Enter your marks for A: ");
    scanf("%d", &sub_A);
    printf("Enter your marks for B: ");
    scanf("%d", &sub_B);

    if ((sub_A >= 55) && (sub_B >= 45)) {
        printf("PASS !! \n");
    }
    else if (((sub_A >= 45 && sub_A < 55)) && (sub_B >= 55)) {
        printf("PASS ! \n");
    }
    else if ((sub_A >= 65) && (sub_B < 45)) {
        printf("Reappear in B \n");
    }
    else {
        printf("FAIL ! \n");
    }

    // <_______ Code for j ... _______>
    int order, stock, creditOK;
    printf("Enter the number of items you want: ");
    scanf("%d", &order);
    printf("Enter the number of items available: ");
    scanf("%d", &stock);
    printf("Is your credit OK? (1 for yes, 0 for no): ");
    scanf("%d", &creditOK);

    if (creditOK != 1) {
        printf("Do NOT supply. Send intimation.\n");
    }
    else if (stock >= order) {
        printf("Supply the full order\n");
    }
    else {
        printf("Supply whatever is available (%d)\n", stock);
        printf("Remaining balance will be shipped later\n");
    }


    return 0;
}