#include<stdio.h>
int main()
{
    int a,b,c,smallest;
    printf("Enter three integer number: ");
    scanf("%d %d %d", &a, &b, &c);
    smallest = (a<b)?((a<c)?a:c):((b<c)?b:c);
    printf("%d is the smallest: ", smallest);
    return 0;
}
