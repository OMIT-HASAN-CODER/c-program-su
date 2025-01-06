#include <stdio.h>
int main()
{
    int n, oddSum = 0, evenSum = 0, digit;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    while(n != 0) {
        digit = n % 10;
        if(digit % 2 == 0) {
            evenSum += digit;
        }
        else{
            oddSum += digit;
        }
        n /= 10;
    }
    printf("Sum of odd digits: %d\n", oddSum);
    printf("Sum of even digits: %d\n", evenSum);
    return 0;
}
