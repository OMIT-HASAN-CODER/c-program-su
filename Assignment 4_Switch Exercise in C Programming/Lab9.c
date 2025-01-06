#include <stdio.h>

int main()
{
    char ch;
    while(1)
    {
        printf("Enter a character: ");
        scanf(" %c", &ch);
        if(ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
        {

            switch (ch)
            {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                printf("%c is a vowel.\n", ch);
                break;
            default:
                printf("%c is a consonant.\n", ch);
            }
        }
        else
        {
            printf("%c is invalid charecter.\n", ch);
        }
    }
    return 0;
}
