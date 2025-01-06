#include<stdio.h>
int main()
{
    int m;
    printf("Enter your  marks: ");
    scanf("%d",&m);
    if(m<0 || m>100)
        printf("Invalid marks");
    else if(m>=80)
        printf("A+\n");
    else if(m>=75)
        printf("A\n");
    else if(m>=70)
        printf("A-\n");
    else if(m>=65)
        printf("B+\n");
    else
        printf("F\n");
    return 0;
}
