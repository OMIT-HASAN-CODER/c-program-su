#include <stdio.h>

int main()
{
    int i = 5;
    do
    {
        printf("%d\t", i);
        i = i + 5;
    }
    while(i <= 100);
    return 0;
}

