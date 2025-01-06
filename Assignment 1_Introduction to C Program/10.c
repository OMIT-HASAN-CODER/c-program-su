#include<stdio.h>
int main()
{
    float C,F;
    printf("Enter Celsius Temperature: ");
    scanf("%f",&C);
    F=(C*9/5)+32;
    printf("\nFahrenheit Temperature is: %.2f\n",F);
    return 0;
}
