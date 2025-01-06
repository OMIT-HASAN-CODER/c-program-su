#include <stdio.h>
int main()
{
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (n == 0)
       printf("\nYou entered: %d\n", n);
    else if (n % 2 == 0)
        printf("\n%d is even.\n", n);
    else
        printf("\n%d is odd.\n", n);
    return 0;
}

