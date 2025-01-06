/**
User-defined function: A function which is defined by a user
Parts of User-defined function:
1. Function declaration >> usually placed before main function
2. Function definition >> usually placed after the main function
3. Function calling >> usually placed inside the main function
**/
/**
Create a user-defined function to add two numbers.
**/

#include <stdio.h>

void add();//function declaration
int main()
{
    add ();//function calling
    return 0;
}
//function definition
void add()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Summation = %d\n", a + b);
}
