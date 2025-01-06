#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter first integer number: ");
    scanf("%d", &a);
    printf("Enter second integer number: ");
    scanf("%d", &b);
    printf("\nYour first number is: %d\n", a);
    printf("Your second number is: %d\n\n", b);
    a += b;
    printf("After a += b, a = %d\n", a);
    a -= b;
    printf("After a -= b, a = %d\n", a);
    a *= b;
    printf("After a *= b, a = %d\n", a);
    a /= b;
    printf("After a /= b, a = %d\n", a);
    a %= b;
    printf("After a %%= b, a = %d\n", a);
    return 0;
}

