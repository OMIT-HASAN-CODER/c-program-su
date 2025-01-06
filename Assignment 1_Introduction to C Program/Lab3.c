#include <stdio.h>
int main() {
    char ch1, ch2;
    printf("Enter Two Characters: ");
    scanf(" %c %c", &ch1, &ch2);
    printf("\nYou entered the characters: '%c' and '%c'\n", ch1, ch2);
    printf("The ASCII value of '%c' is: %d\n", ch1, ch1);
    printf("The ASCII value of '%c' is: %d\n", ch2, ch2);
    return 0;
}
