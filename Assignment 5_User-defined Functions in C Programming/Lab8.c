#include <stdio.h>
void first10EvenNumbers();
int main()
{
    first10EvenNumbers();
    return 0;
}
void first10EvenNumbers()
{
    int i;
    for(i = 1; i <= 10; i++){
        printf("%d\t", i * 2);
    }
}
