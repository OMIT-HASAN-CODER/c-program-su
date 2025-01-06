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
    printf("Post-increment of a (a++): %d\n", a++);
    printf("Value of a, after post-increment: %d\n", a);
    printf("Post-decrement of b (b--): %d\n", b--);
    printf("Value of b, after post-decrement: %d\n\n", b);
    printf("Pre-increment of a (++a): %d\n", ++a);
    printf("Pre-decrement of b (--b): %d\n", --b);
    return 0;
}

