#include <stdio.h>
int main()
{
    int age, citizenship;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("\nEnter citizenship status (1 for citizen, 0 for non-citizen): ");
    scanf("%d", &citizenship);
    if (age >= 18 && citizenship == 1)
        printf("\nYou are eligible to vote.\n");
    else
        printf("\nYou are not eligible to vote.\n");
    return 0;
}

