#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    if(age<0)
        printf("Invalid age\n");
    else if(age<=12)
        printf("Child\n");
    else if(age>=13 && age<=18)
        printf("Teenager\n");
    else if(age>=20 && age<=64)
        printf("Adult\n");
    else
        printf("Senior\n");
    return 0;
}
