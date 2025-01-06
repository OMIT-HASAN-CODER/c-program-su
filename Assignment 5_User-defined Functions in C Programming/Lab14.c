#include <stdio.h>
int add(int a);
int main()
{
    int a, r;
    printf("Enter two numbers: ");
    scanf("%d", &a);
    r = add(a);
    printf("%d", r);
    return 0;
}
int add(int a)
{
    return a * a;
}
