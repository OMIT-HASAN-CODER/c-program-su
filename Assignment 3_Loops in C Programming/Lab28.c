#include <stdio.h>

int main()
{
    int n, evenDigitsSum = 0, oddDigitsSum = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n != 0){
        remainder = n % 10;
        if(remainder %2 == 0){
            evenDigitsSum += remainder;
        }
        else{
            oddDigitsSum += remainder;
        }
        n = n / 10;
    }
    printf("Summation of Even Digits = %d\nSummation of Odd DigitsSum = %d\n", evenDigitsSum, oddDigitsSum);

    return 0;
}
