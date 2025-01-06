#include <stdio.h>
int main()
{
    int n, reversedNum = 0, remainder;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    while(n != 0){
        remainder = n % 10;
        reversedNum = reversedNum * 10 + remainder;
        n /= 10;
    }
    printf("Reversed number: %d\n", reversedNum);
    return 0;
}
