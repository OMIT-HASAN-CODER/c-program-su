#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    switch(ch)
    {
        case 'A' ... 'Z':
        case 'a' ... 'z':
            printf("%c is an Alphabet.\n", ch);
            break;
        case '0' ... '9':
            printf("%c is a Digit.\n", ch);
            break;
        default:
            printf("%c is a Special Character.\n", ch);
    }
    return 0;
}
