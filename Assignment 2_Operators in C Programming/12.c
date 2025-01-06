#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age >= 0 && age <= 12)
        printf("\nYou are a Child.\n");
    else if (age >= 13 && age <= 19)
        printf("\nYou are a Teenager.\n");
    else if (age >= 20 && age <= 64)
        printf("\nYou are an Adult.\n");
    else if (age >= 65)
        printf("\nYou are a Senior.\n");
    else
        printf("\nInvalid age.\n");
    return 0;
}

