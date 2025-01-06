#include <stdio.h>
int main()
{
    int n1, n2, sum, sub, mul, div, mod;
    printf("Enter the first number: ");
    scanf("%d", &n1);
    printf("Enter the second number: ");
    scanf("%d", &n2);
    sum = n1 + n2;
    sub = n1 - n2;
    mul = n1 * n2;
    printf("\nSummation: %d + %d = %d\n", n1, n2, sum);
    printf("Subtraction: %d - %d = %d\n", n1, n2, sub);
    printf("Multiplication: %d * %d = %d\n", n1, n2, mul);
    if(n2 != 0)
    {
        div = n1 / n2;
        mod = n1 % n2;
        printf("Division: %d / %d = %d\n", n1, n2, div);
        printf("Modulus: %d %% %d = %d\n", n1, n2, mod);
    }
    else
        printf("Division and modulus operations cannot be performed as the second number is zero.\n");
    return 0;
}
