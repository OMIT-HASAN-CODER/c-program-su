#include <stdio.h>
int main()
{
    int a[5] = {2,3,5,7,9}, i, s = 7;
    for(i = 0; i < 5; i++){
        if(a[i] == s){
                printf("%d is found at index %d\n", s, i);
           }
    }
    return 0;
}
