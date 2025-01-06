#include <stdio.h>

int main()
{
    double sum = 0.0;
    int i, n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        sum = sum + 1.0/i;
    }
    printf("Summation = %.3lf\n", sum);

    return 0;
}
