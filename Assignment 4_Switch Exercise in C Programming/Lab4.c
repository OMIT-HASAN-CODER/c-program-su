#include <stdio.h>

int main()
{
    int n, a, b, i;

    printf("1. Hello message\n");
    printf("2. Hi message\n");
    printf("3. Welcome message\n");
    printf("4. Add two numbers\n");
    printf("5. Multiplication Table\n");
    printf("=======================\n");

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
    case 4:
        printf("Enter two numbers : ");
        scanf("%d %d", &a, &b);
        printf("%d + %d = %d\n", a, b, a + b);
        break;
    case 5:
        printf("Enter a number : ");
        scanf("%d", &n);
        for(i = 1; i <= 10; i++){
            printf("%d * %d = %d\n", n, i, n * i);
        }
        break;
    default:
        printf("Invalid case.\n");
    }
    return 0;
}
