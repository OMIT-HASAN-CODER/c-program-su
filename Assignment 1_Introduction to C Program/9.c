#include<stdio.h>
int main()
{
    float a,b,product;
    printf("Enter Two Floating Numbers: ");
    scanf("%f%f",&a,&b);
    product = a * b;
    printf("\nThe product of %.2f and %.2f is: %.2f\n",a,b,product);
    return 0;
}
