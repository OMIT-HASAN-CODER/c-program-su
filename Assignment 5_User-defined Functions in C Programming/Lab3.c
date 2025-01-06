#include <stdio.h>

void add();
void sub();
void mul();
void div();
void mod();
void hello();
int main()
{
    hello();
    add();
    sub();
    mul();
    div();
    mod();
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

