#include <stdio.h>
int main()
{
    int i, sum = 0;
    //using for loop
    for(i = 1; i <= 100; i++){
        sum += i;
    }
    printf("Summation of 1 + 2 + 3 + ... ... ... + 99 + 100 is: %d\n", sum);
    //using while loop
    sum = 0;
    i = 1;
    while(i <= 100){
        sum += i;
        i += 2;
    }
    printf("Summation of 1 + 3 + 5 + ... ... ... + 97 + 99 is: %d\n", sum);
    //using do-while loop
    sum = 0;
    i = 2;
    do{
        sum += i;
        i += 2;
    }
    while(i <= 100);
    printf("Summation of 2 + 4 + 6 + ... ... ... + 98 + 100 is: %d\n", sum);
    return 0;
}
