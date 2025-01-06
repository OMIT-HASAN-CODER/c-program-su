#include <stdio.h>

void add();
void hello();
int main()
{
    hello();
    add ();
    return 0;
}
void add()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Summation = %d\n", a + b);
}
void hello()
{
    printf("Hello Everyone!\n");
}

