#include <stdio.h>

int main()
{
    int n;

    printf("1. Hello message\n");
    printf("2. Hi message\n");
    printf("3. Welcome message\n");
    printf("==================\n");

    printf("Enter your choice : ");
    scanf("%d", &n);

    switch(n)
    {
    case 1:
        printf("Hello!");
        break;
    case 2:
        printf("Hi!");
        break;
    case 3:
        printf("Welcome.");
        break;
    default:
        printf("Invalid case.\n");
    }
    return 0;
}
