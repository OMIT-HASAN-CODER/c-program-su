#include <stdio.h>

int main()
{
    int i, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(i = 2; i <= n; i = i + 1)
    {
        printf("%d\t", i);
    }
    return 0;
}

