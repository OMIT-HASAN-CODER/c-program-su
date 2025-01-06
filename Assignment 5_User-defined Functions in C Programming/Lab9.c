#include <stdio.h>
void first10OddNumbers();
int main()
{
    first10OddNumbers();
    return 0;
}
void first10OddNumbers()
{
    int i;
    for(i = 1; i <= 10; i++){
        printf("%d\t", i * 2 - 1);
    }
}
