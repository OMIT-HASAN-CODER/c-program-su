#include <stdio.h>
int main()
{
    int a[5] = {2,3,5,7,9}, i, s, isFound = 0;
    printf("Item to be searched: ");
    scanf("%d", &s);
    for(i = 0; i < 5; i++){
        if(a[i] == s){
                isFound = 1;
                break;
           }
    }
    if(isFound == 0){
        printf("%d is not found\n", s);
    }
    else{
        printf("%d is found at index %d\n", s, i);
    }
    return 0;
}
