#include <stdio.h>

int main()
{
    int i;
    for(i = 100; i >= 1; i = i - 2)
    {
        printf("%d\t", i);
    }
    return 0;
}
