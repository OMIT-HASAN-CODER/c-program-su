#include <stdio.h>
int main()
{
    int a[5] = {2,3,5,7,9}, i, sum = 0;
    for(i = 0; i < 5; i++){
        printf("%d\n", a[i]);
        sum = sum + a[i];
    }
    printf("Summation = %d\n", sum);
    return 0;
}
