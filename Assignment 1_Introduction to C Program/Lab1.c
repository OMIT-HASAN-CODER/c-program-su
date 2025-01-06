#include<stdio.h>
int main()
{
    float a,b,mul;
    printf("Enter two float numbers: ");
    scanf("%f %f",&a,&b);
    mul = a*b;
    printf("\nThe product of %.2f and %.2f is: %.2f\n",a,b,mul);
    return 0;
}
