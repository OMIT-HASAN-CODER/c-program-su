#include <stdio.h>
int main()
{
    int a[5] = {2,3,5,7,9};
    printf("%d\n",a[0]);
    printf("%d\n",a[1]);
    printf("%d\n",a[2]);
    printf("%d\n",a[3]);
    printf("%d\n",a[4]);
    int sum = a[0]+a[1]+a[2]+a[3]+a[4];
    printf("Summation = %d\n",sum);
    float average = (float)sum/5;//(float)sum--> Type casting
    printf("Average = %.3f\n",average);
    return 0;
}
