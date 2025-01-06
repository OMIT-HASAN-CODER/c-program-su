#include <stdio.h>

int main()
{
    char i;
    for(i = 65; i <= 90; i = i + 1)
    {
        printf("%c\t", i);
    }
    printf("\n\n");
    for(i = 97; i <= 122; i = i + 1)
    {
        printf("%c\t", i);
    }
    return 0;
}
