#include <stdio.h>
int main()
{
    int n, a, b;
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("6. Exit\n");
    printf("====================\n");
    while(1)
    {

        printf("\nEnter your choice : ");
        scanf("%d", &n);

        switch(n)
        {
        case 1:
            printf("Enter Two Numbers: ");
            scanf("%d %d", &a, &b);
            printf("%d + %d = %d", a, b, a + b);
            break;
        case 2:
            printf("Enter Two Numbers: ");
            scanf("%d %d", &a, &b);
            printf("%d - %d = %d", a, b, a - b);
            break;
        case 3:
            printf("Enter Two Numbers: ");
            scanf("%d %d", &a, &b);
            printf("%d * %d = %d", a, b, a * b);
            break;
        case 4:
            printf("Enter Two Numbers: ");
            scanf("%d %d", &a, &b);
            printf("%d / %d = %d", a, b, a / b);
            break;
        case 5:
            printf("Enter Two Numbers: ");
            scanf("%d %d", &a, &b);
            printf("%d % %d = %d", a, b, a % b);
            break;
        case 6:
            printf("You Are exiting\n");
            return 0;
            break;
        default:
            printf("Invalid case.\n");
        }
    }
    return 0;
}
