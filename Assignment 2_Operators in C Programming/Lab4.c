#include<stdio.h>
int main()
{
    int a,b,c,l;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
        l = a;
    else if(b>c)
       l = b;
    else
       l = c;
    printf("%d is the largest\n",l );
    return 0;
}
