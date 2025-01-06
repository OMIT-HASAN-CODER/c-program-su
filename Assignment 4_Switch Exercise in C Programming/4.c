#include <stdio.h>
int main()
{
    char gender;
    printf("Enter a gender character (M/m/F/f): ");
    scanf(" %c", &gender);
    switch(gender)
    {
        case 'M':
        case 'm':
            printf("Gender: Male\n");
            break;
        case 'F':
        case 'f':
            printf("Gender: Female\n");
            break;
        default:
            printf("Invalid input! Please enter 'M', 'm', 'F', or 'f'.\n");
    }
    return 0;
}

