#include <stdio.h>
void isPrime();
int main()
{
    isPrime();
    return 0;
}
void isPrime()
{
    int n, i, flag = 0;
    printf("Enter a numbe: ");
    scanf("%d", &n);
    for(i = 2; i < n; i++){
        if(n % i == 0){
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        printf("%d is prime\n", n);
    }
    else{
        printf("%d is not prime\n", n);
    }
}
