#include <stdio.h>
int main()
{
    char color;
    printf("Enter a traffic light color (R/r for Red, G/g for Green, Y/y for Yellow): ");
    scanf(" %c", &color);
    switch(color)
    {
        case 'R':
        case 'r':
            printf("Action: Stop\n");
            break;
        case 'G':
        case 'g':
            printf("Action: Go\n");
            break;
        case 'Y':
        case 'y':
            printf("Action: Caution\n");
            break;
        default:
            printf("Invalid input! Please enter 'R', 'r', 'G', 'g', 'Y', or 'y'.\n");
    }
    return 0;
}
