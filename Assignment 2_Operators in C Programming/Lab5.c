#include<stdio.h>
int main()
{
    int a,b,c,d,e,l;
    printf("Enter three numbers: ");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    if(a>b && a>c && a>d && a>e)
        l = a;
    else if(b>c && b>d && b>e)
       l = b;
    else if(c>d && c>d)
       l = c;
    else if(d>e)
        l = d;
    else
       l = e;
    printf("%d is the largest\n",l );
    return 0;
}
