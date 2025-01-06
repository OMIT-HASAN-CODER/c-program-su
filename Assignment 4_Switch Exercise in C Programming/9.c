#include <stdio.h>
int main()
{
    int year, leapyear;
    printf("Enter a year: ");
    scanf("%d", &year);
    leapyear = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
    switch(leapyear)
    {
    case 1:
        printf("%d is leap year\n", year);
        break;
    case 0:
        printf("%dis not leap year\n", year);
        break;
    }
    return 0;
}
