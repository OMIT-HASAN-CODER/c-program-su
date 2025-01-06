#include <stdio.h>

int main()
{
    int n, count = 0, sum = 0, evenDigitsSum = 0, oddDigitsSum = 0, remainder;

    printf("Enter a Number : ");
    scanf("%d", &n);

    while(n != 0){
        remainder = n % 10;
        if(remainder %2 == 0){
            evenDigitsSum += remainder;
        }
        else{
            oddDigitsSum += remainder;
        }
        sum = sum + remainder;
        n = n / 10;
        count ++;
    }
    printf("\nTotal Digits : %d\nSummation of all Digits : %d\nSummation of Even Digits = %d\nSummation of Odd Digits = %d\n", count, sum, evenDigitsSum, oddDigitsSum);

    return 0;
}
