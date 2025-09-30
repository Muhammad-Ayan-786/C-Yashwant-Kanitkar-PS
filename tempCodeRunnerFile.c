#include <stdio.h>

/*
5! = 1x2x3x4x5
4! = 1x2x3x4
3! = 1x2x3
2! = 1x2
1! = 1
*/


// Function declaration
int factorial(int n);
// Recursive function definition
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;  // Base case
    } else {
        return n * factorial(n - 1);  // Recursive call
    }
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.");
    } else {
        printf("Factorial of %d is %d\n", num, factorial(num));
    }

    return 0;
}