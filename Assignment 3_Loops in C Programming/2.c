#include <stdio.h>
int main()
{
    int i, n;
    printf("1. 1, 2, 3, 4, ... ... ... 99, 100\n");
    printf("2. 2, 4, 6, 8, ... ... ... 98, 100\n");
    printf("3. 1, 3, 5, 7, ... ... ... 97, 99\n");
    printf("4. 5, 10, 15, ... ... ... 95, 100\n");
    printf("5. 1, 4, 7, 10, ... ... ... 97, 100\n");
    printf("6. 1, 4, 9, 16, ... ... ... 81, 100\n");
    printf("7. 1, 8, 27, ... ... ...729, 1000\n");
    printf("8. 1, 2, 3, 4, ... ... ... n\n");
    printf("9. 100, 99, 98, ... ... ... 3, 2, 1\n");
    printf("10. 100, 98, 96, ... ... ... 6, 4, 2\n");
    printf("11. A, B, C, D, ... ... ... X, Y, Z\n");
    printf("12. A, C, E, ... ... ... W, Y\n");
    printf("13. B, D, F, ... ... ... X, Z\n");
    printf("14. a, b, c, d, ... ... ... x, y, z\n");
    printf("15. a, c, e, ... ... ... w, y\n");
    printf("16. b, d, f, ... ... ... x, z\n");
    printf("17. EXIT\n");
    printf("====================================\n");
    while(1)
    {

        printf("\nEnter your choice : ");
        scanf("%d", &n);
        switch(n)
        {
        case 1:
            printf("\nUsing for loop: \n");
            for(i = 1; i <= 100; i++){
                printf("%d\t", i);
            }
            printf("\nUsing while loop: \n");
            i = 1;
            while(i <= 100){
                printf("%d\t", i);
                i++;
            }
            printf("\nUsing do while loop: \n");
            i = 1;
            do{
                printf("%d\t", i);
                i++;
            }
            while(i <= 100);
            break;
        case 2:
            printf("\nUsing for loop: \n");
            for(i = 2; i <= 100; i = i + 2){
                printf("%d\t", i);
            }
            printf("\nUsing while loop: \n");
            i = 2;
            while(i <= 100){
                printf("%d\t", i);
                i = i + 2;
            }
            printf("\nUsing do while loop: \n");
            i = 2;
            do{
                printf("%d\t", i);
                i = i + 2;
            }
            while(i <= 100);
            break;
        case 3:
            printf("\nUsing for loop: \n");
            for(i = 1; i <= 100; i = i + 2){
                printf("%d\t", i);
            }
            printf("\nUsing while loop: \n");
            i = 1;
            while(i <= 100){
                printf("%d\t", i);
                i = i + 2;
            }
            printf("\nUsing do while loop: \n");
            i = 1;
            do{
                printf("%d\t", i);
                i = i + 2;
            }
            while(i <= 100);
            break;
        case 4:
            printf("\nUsing for loop: \n");
            for(i = 5; i <= 100; i = i + 5){
                printf("%d\t", i);
            }
            printf("\nUsing while loop: \n");
            i = 5;
            while(i <= 100){
                printf("%d\t", i);
                i = i + 5;
            }
            printf("\nUsing do while loop: \n");
            i = 5;
            do{
                printf("%d\t", i);
                i = i + 5;
            }
            while(i <= 100);
            break;
        case 5:
            printf("\nUsing for loop: \n");
            for(i = 1; i <= 100; i = i + 3){
                printf("%d\t", i);
            }
            printf("\nUsing while loop: \n");
            i = 1;
            while(i <= 100){
                printf("%d\t", i);
                i = i + 3;
            }
            printf("\nUsing do while loop: \n");
            i = 1;
            do{
                printf("%d\t", i);
                i = i + 3;
            }
            while(i <= 100);
            break;
        case 6:
            printf("\nUsing for loop: \n");
            for(i = 1; i <= 10; i++){
                printf("%d\t", i * i);
            }
            printf("\nUsing while loop: \n");
            i = 1;
            while(i <= 10){
                printf("%d\t", i * i);
                i++;
            }
            printf("\nUsing do while loop: \n");
            i = 1;
            do{
                printf("%d\t", i * i);
                i++;
            }
            while(i <= 10);
            break;
        case 7:
            printf("\nUsing for loop: \n");
            for(i = 1; i <= 10; i++){
                printf("%d\t", i * i * i);
            }
            printf("\nUsing while loop: \n");
            i = 1;
            while(i <= 10){
                printf("%d\t", i * i * i);
                i++;
            }
            printf("\nUsing do while loop: \n");
            i = 1;
            do{
                printf("%d\t", i * i * i);
                i++;
            }
            while(i <= 10);
            break;
        case 8:
            printf("\nEnter the value of n: ");
            scanf("%d", &n);
            printf("\nUsing for loop: \n");
            for(i = 1; i <= n; i++){
                printf("%d\t", i);
            }
            printf("\nUsing while loop: \n");
            i = 1;
            while(i <= n){
                printf("%d\t", i);
                i++;
            }
            printf("\nUsing do while loop: \n");
            i = 1;
            do{
                printf("%d\t", i);
                i++;
            }
            while(i <= n);
            break;
        case 9:
            printf("\nUsing for loop: \n");
            for(i = 100; i >= 1; i--){
                printf("%d\t", i);
            }
            printf("\nUsing while loop: \n");
            i = 100;
            while(i >= 1){
                printf("%d\t", i);
                i--;
            }
            printf("\nUsing do while loop: \n");
            i = 100;
            do{
                printf("%d\t", i);
                i--;
            }
            while(i >= 1);
            break;
        case 10:
            printf("\nUsing for loop: \n");
            for(i = 100; i >= 1; i = i - 2){
                printf("%d\t", i);
            }
            printf("\nUsing while loop: \n");
            i = 100;
            while(i >= 1){
                printf("%d\t", i);
                i = i - 2;
            }
            printf("\nUsing do while loop: \n");
            i = 100;
            do{
                printf("%d\t", i);
                i = i - 2;
            }
            while(i >= 1);
            break;
        case 11:
            printf("\nUsing for loop: \n");
            for(i = 'A'; i <= 'Z'; i++){
                printf("%c\t", i);
            }
            printf("\nUsing while loop: \n");
            i = 'A';
            while(i <= 'Z'){
                printf("%c\t", i);
                i++;
            }
            printf("\nUsing do while loop: \n");
            i = 'A';
            do{
                printf("%c\t", i);
                i++;
            }
            while(i <= 'Z');
            break;
        case 12:
            printf("\nUsing for loop: \n");
            for(i = 'A'; i <= 'Z'; i = i + 2){
                printf("%c\t", i);
            }
            printf("\nUsing while loop: \n");
            i = 'A';
            while(i <= 'Z'){
                printf("%c\t", i);
                i = i + 2;
            }
            printf("\nUsing do while loop: \n");
            i = 'A';
            do{
                printf("%c\t", i);
                i = i + 2;
            }
            while(i <= 'Z');
            break;
        case 13:
            printf("\nUsing for loop: \n");
            for(i = 'B'; i <= 'Z'; i = i + 2){
                printf("%c\t", i);
            }
            printf("\nUsing while loop: \n");
            i = 'B';
            while(i <= 'Z'){
                printf("%c\t", i);
                i = i + 2;
            }
            printf("\nUsing do while loop: \n");
            i = 'B';
            do{
                printf("%c\t", i);
                i = i + 2;
            }
            while(i <= 'Z');
            break;
        case 14:
            printf("\nUsing for loop: \n");
            for(i = 'a'; i <= 'z'; i++){
                printf("%c\t", i);
            }
            printf("\nUsing while loop: \n");
            i = 'a';
            while(i <= 'z'){
                printf("%c\t", i);
                i++;
            }
            printf("\nUsing do while loop: \n");
            i = 'a';
            do{
                printf("%c\t", i);
                i++;
            }
            while(i <= 'z');
            break;
        case 15:
            printf("\nUsing for loop: \n");
            for(i = 'a'; i <= 'z'; i = i + 2){
                printf("%c\t", i);
            }
            printf("\nUsing while loop: \n");
            i = 'a';
            while(i <= 'z'){
                printf("%c\t", i);
                i = i + 2;
            }
            printf("\nUsing do while loop: \n");
            i = 'a';
            do{
                printf("%c\t", i);
                i = i + 2;
            }
            while(i <= 'z');
            break;
        case 16:
            printf("\nUsing for loop: \n");
            for(i = 'b'; i <= 'z'; i = i + 2){
                printf("%c\t", i);
            }
            printf("\nUsing while loop: \n");
            i = 'b';
            while(i <= 'z'){
                printf("%c\t", i);
                i = i + 2;
            }
            printf("\nUsing do while loop: \n");
            i = 'b';
            do{
                printf("%c\t", i);
                i = i + 2;
            }
            while(i <= 'z');
            break;
        case 17:
            printf("\nYou are exiting\n");
            return 0;
            break;
        default:
            printf("\nInvalid choice.\n");
        }
    }
    return 0;
}
