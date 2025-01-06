#include <stdio.h>

void add();
void sub();
void mul();
void div();
void mod();
void hello();
int main()
{
    int n;
    printf("Enter your choice: ");
    scanf("%d", &n);
    switch(n)
    {
    case 1:
        hello();
        break;
    case 2:
        add();
        break;
    case 3:
        sub();
        break;
    case 4:
        mul();
        break;
    case 5:
        div();
        break;
    case 6:
        mod();
        break;
    default:
        printf("Invalid choice.\n");
    }
    return 0;
}
void add()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Summation = %d\n", a + b);
}
void sub()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Summation = %d\n", a - b);
}
void mul()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Subtraction = %d\n", a * b);
}
void div()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Division = %d\n", a / b);
}
void mod()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Modulas = %d\n", a % b);
}
void hello()
{
    printf("Hello Everyone!\n");
}
