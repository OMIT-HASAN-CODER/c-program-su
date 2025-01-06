#include <stdio.h>
int add(int a, int b);
int main()
{
    int a, b, r;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    r = add(a, b);
    printf("%d", r);
    return 0;
}
int add(int a, int b)
{
    return a + b;
}

