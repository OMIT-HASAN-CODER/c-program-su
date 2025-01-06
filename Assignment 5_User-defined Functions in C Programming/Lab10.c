#include <stdio.h>
void first10FibNumbers();
int main()
{
    first10FibNumbers();
    return 0;
}
void first10FibNumbers()
{
    int n1 = 0, n2 = 1, next, i;
    for(i = 1; i <= 10; i++){
        printf("%d\t", n1);
        next = n1 + n2;
        n1 = n2;
        n2 = next;
    }
}
