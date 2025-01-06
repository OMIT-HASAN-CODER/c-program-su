#include <stdio.h>
int add(int a, int b);
int main()
{
    int r = add(10, 20);
    printf("%d", r);
    return 0;
}
int add(int a, int b)
{
    return a + b;
}
