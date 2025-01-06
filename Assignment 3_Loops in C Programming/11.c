#include <stdio.h>
int main()
{
    int i, n;
    double sum = 0.0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        sum += 1.0 / i;
    }
    printf("Sum of the series: %.6f\n", sum);
    return 0;
}
