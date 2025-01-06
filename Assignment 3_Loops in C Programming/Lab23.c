#include <stdio.h>

int main()
{
    int i, sum = 0;
    for(i = 1; i <= 10; i++)
    {
        sum =  sum + i;
        printf("When i = %d\tSummation = %d\n", i, sum);
    }
    return 0;
}
