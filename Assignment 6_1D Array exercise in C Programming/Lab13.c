#include <stdio.h>
int main()
{
    int a[5] = {2,3,5,7,9}, i, largest = a[0], smallest = a[0];
    for(i = 1; i < 5; i++){
        if(largest < a[i]){
            largest = a[i];
        }
        if(smallest > a[i]){
            smallest = a[i];
        }
    }
    printf("%d is the largest\n", largest);
    printf("%d is the smallest\n", smallest);
    return 0;
}
