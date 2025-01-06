#include <stdio.h>
int main() {
    // This is a single-line comment
    // Declare two integer variables
    int num1, num2, sum;

    /*
       This is a multi-line comment
       We will take two inputs from the user
       and calculate their sum
    */

    // Taking input for the first number
    printf("Enter The First Number: ");
    scanf("%d", &num1); // Store input in num1

    // Taking input for the second number
    printf("Enter The Second Number: ");
    scanf("%d", &num2); // Store input in num2

    // Calculate the sum of num1 and num2
    sum = num1 + num2;

    // Display the result
    printf("\nThe Sum of %d and %d is: %d\n", num1, num2, sum);
    return 0;
}

