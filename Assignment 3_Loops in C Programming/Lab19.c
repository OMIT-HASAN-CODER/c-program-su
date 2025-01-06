#include <stdio.h>

int main()
{
    char i;
    for(i = 'A'; i <= 'Z'; i = i + 1)
    {
        printf("%c\t", i);
    }
    printf("\n\n");
    for(i = 'a'; i <= 'z'; i = i + 1)
    {
        printf("%c\t", i);
    }
    return 0;
}

