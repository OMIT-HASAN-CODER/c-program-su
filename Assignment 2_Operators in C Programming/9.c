#include <stdio.h>
int main(){
    int n1, n2, n3, smallest;
    printf("Enter three integers:\n");
    scanf("%d %d %d", &n1, &n2, &n3);
    smallest = (n1 < n2) ?
               ((n1 < n3) ? n1 : n3) :
               ((n2 < n3) ? n2 : n3);
    printf("\nThe smallest number is: %d\n", smallest);
    return 0;
}

