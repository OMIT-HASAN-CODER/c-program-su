#include <stdio.h>

int main() {
    char char1, char2;

    // Taking two characters as input
    printf("Enter two characters: ");
    scanf(" %c %c", &char1, &char2);  // The space before %c is important to avoid issues with reading characters after input.

    // Displaying the characters and their ASCII values
    printf("You entered the characters: '%c' and '%c'\n", char1, char2);
    printf("The ASCII value of '%c' is: %d\n", char1, char1);
    printf("The ASCII value of '%c' is: %d\n", char2, char2);

    return 0;
}

