#include <stdio.h>

void add();
void sub();
void mul();
void div();
void mod();
void hello();
void menu();
void myinfo();
void reverseDigit();
int main()
{
    int n;
    myinfo();
    menu ();
    while(1)
    {
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
        case 7:
            reverseDigit();
            break;
        case 0:
            printf("You are exiting\n");
            return 0;
        default:
            printf("Invalid choice.\n");
        }
    }
    return 0;
}
void myinfo()
{
    printf("My Information-\nName: Omit Hasan\nID: CSE2401031342\nUniversity Name: Sonargaon University\nMobile No: 01319662024\n\n");
}
void menu()
{
    printf("1. Hello Massege\n");
    printf("2. Addition\n");
    printf("3. Subtraction\n");
    printf("4. Multiplication\n");
    printf("5. Division\n");
    printf("6. Modulas\n");
    printf("7. Reverse number\n");
    printf("0. Exit\n");
    printf("=================\n");
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
void reverseDigit()
{
    int n, remainder, reverse = 0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n != 0){
        remainder = n % 10;
        reverse = reverse*10+remainder;
        n = n / 10;
    }
    printf("Reverse number\n", reverse);
}


