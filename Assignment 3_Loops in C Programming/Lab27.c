#include <stdio.h>

int main()
{
    int n, sum = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n != 0){
        remainder = n % 10;
        sum = sum + remainder;
        n = n / 10;
    }
    printf("Summation of all Digits: %d\n", sum);

    return 0;
}
