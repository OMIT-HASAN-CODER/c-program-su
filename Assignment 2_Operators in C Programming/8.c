#include <stdio.h>
int main()
{
    int n1, n2, n3, largest;
    printf("Enter three integers:\n");
    scanf("%d %d %d", &n1, &n2, &n3);
    largest = (n1 > n2) ?
              ((n1 > n3) ? n1 : n3) :
              ((n2 > n3) ? n2 : n3);
    printf("\nThe largest number is: %d\n", largest);
    return 0;
}

