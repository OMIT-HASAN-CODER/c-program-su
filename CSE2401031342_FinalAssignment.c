#include <stdio.h>
#include <math.h>
void myInfo();
void menu();
void hello();
void asciivalue();
void mtable();
void sumofDigits();
void countofDigits();
void reverseNum();
void calculatingFactorial();
void primeNum();
void sumofSeries();
void palindromeNum();
void armstrongNum();
void sumofOdddigitsandEvendigits();
void series1();
void series2();
void series3();
void series4();
void series5();
void series6();
void SumofSeries1();
void SumofSeries2();
void SumofSeries3();
void charactertype();
void leapyear();
void gendercheck();
void weekdaycheck();
void first10EvenNumbers();
void first10OddNumbers();
void first10FibNumbers();
void first10NaturalNumbers();
void greetings();
int main()
{
    int n;
    myInfo();
    menu();
    while(1)
    {
        printf("\n\nEnter Your Choice (0-30): ");
        scanf("%d", &n);
        switch(n)
        {
        case 0:
            hello();
            break;
        case 1:
            asciivalue();
            break;
        case 2:
            mtable();
            break;
        case 3:
            sumofDigits();
            break;
        case 4:
            countofDigits();
            break;
        case 5:
            reverseNum();
            break;
        case 6:
            calculatingFactorial();
            break;
        case 7:
            primeNum();
            break;
        case 8:
            sumofSeries();
            break;
        case 9:
            palindromeNum();
            break;
        case 10:
            armstrongNum();
            break;
        case 11:
            sumofOdddigitsandEvendigits();
            break;
        case 12:
            series1();
            break;
        case 13:
            series2();
            break;
        case 14:
            series3();
            break;
        case 15:
            series4();
            break;
        case 16:
            series5();
            break;
        case 17:
            series6();
            break;
        case 18:
            SumofSeries1();
            break;
        case 19:
            SumofSeries2();
            break;
        case 20:
            SumofSeries3();
            break;
        case 21:
            charactertype();
            break;
        case 22:
            leapyear();
            break;
        case 23:
            gendercheck();
            break;
        case 24:
            weekdaycheck();
            break;
        case 25:
            first10EvenNumbers();
            break;
        case 26:
            first10OddNumbers();
            break;
        case 27:
            first10FibNumbers();
            break;
        case 28:
            first10NaturalNumbers();
            break;
        case 29:
            greetings();
            break;
        case 30:
            printf("You are exiting.\n");
            return 0;
            break;
        default:
            printf("Invalid Choice.\nPlease Choose 0-30\n");
        }
    }
    return 0;
}
void myInfo()
{
    printf("\t\t\t\t\tFinal Assignment\n");
    printf("\t\t\t\t\tName: OMIT HASAN\n");
    printf("\t\t\t\t\tID: CSE2401031342\n");
    printf("\t\t\t\t\tSection: Cinq(32A2)\n");
    printf("\t\t\t\t\tDepartment: CSE\n");
    printf("\t\t\t\t\tUniversity: Sonargaon University\n");
}
void menu()
{
    printf("0. Display \"Hello World\" 5 times.\n");
    printf("1. Display alphabets from A to Z using ASCII values.\n");
    printf("2. Display the multiplication table for a given number using a for loop.\n");
    printf("3. Calculate the sum of the digits of a given positive integer using a while loop.\n");
    printf("4. Count the number of digits in a given positive integer using a while loop.\n");
    printf("5. Reverse a given positive integer using a while loop.\n");
    printf("6. Calculate the factorial of a given positive integer using a for loop.\n");
    printf("7. Check whether a given positive integer is prime or not using a for loop.\n");
    printf("8. Compute the sum of the series: 1 + 1/2 + 1/3 + ... + 1/n using a for loop.\n");
    printf("9. Check whether a given number is a palindrome number using a while loop.\n");
    printf("10. Check whether a given number is an Armstrong number using a while loop.\n");
    printf("11. Find the sum of odd digits and even digits of a number using a while loop.\n");
    printf("12. Display 1, 2, 3, 4, ... ... ... 99, 100 using for loop.\n");
    printf("13. Display 5, 10, 15, ... ... ... 95, 100 using while loop.\n");
    printf("14. Display 1, 2, 3, 4, ... ... ... n using do-while loop.\n");
    printf("15. Display 100, 98, 96, ... ... ... 6, 4, 2 using for loop.\n");
    printf("16. Display A, B, C, D, ... ... ... X, Y, Z using while loop.\n");
    printf("17. Display b, d, f, ... ... ... x, z using do-while loop.\n");
    printf("18. Calculate the summation of 1 + 2 + 3 + ... ... ... + 99 + 100 using for loop.\n");
    printf("19. Calculate the summation of 1 + 3 + 5 + ... ... ... + 97 + 99 using while loop.\n");
    printf("20. Calculate the summation of 2 + 4 + 6 + ... ... ... + 98 + 100 using do-while loop.\n");
    printf("21. Check whether a character is a VOWEL or CONSONANT using a switch statement.\n");
    printf("22. Check if a given year is a leap year using switch.\n");
    printf("23. Read a gender using a switch statement.\n");
    printf("24. Read a weekday using a switch statement.\n");
    printf("25. Print the first 10 Even numbers.\n");
    printf("26. Print the first 10 Odd numbers.\n");
    printf("27. Print the first 10 numbers of the Fibonacci series.\n");
    printf("28. Print the first 10 Natural numbers.\n");
    printf("29. Greetings.\n");
    printf("30. Exit");
}
void hello()
{
    printf("\nDisplaying \"Hello World\" 5 times.\n\n");
    int i;
    for(i = 1; i <= 5; i++)
    {
        printf("Hello World!\n");
    }
}
void asciivalue()
{
    printf("\nDisplaying alphabets from A to Z using ASCII values.\n\n");
    int i;
    for(i = 65; i <= 90; i++)
    {
        printf("%c\t", i);
    }
    printf("\n");
}
void mtable()
{
    printf("\nDisplaying the multiplication table for a given number using a for loop.\n\n");
    int i, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }
}
void sumofDigits()
{
    printf("\nCalculating the sum of the digits of a given positive integer using a while loop.\n\n");
    int n, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    while(n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    printf("Sum of the digits: %d\n", sum);
}
void countofDigits()
{
    printf("\nCounting the number of digits in a given positive integer using a while loop.\n\n");
    int n, count = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    while(n != 0)
    {
        n /= 10;
        count++;
    }
    printf("Number of digits: %d\n", count);
}
void reverseNum()
{
    printf("\nReversing a given positive integer using a while loop.\n\n");
    int n, reversedNum = 0, remainder;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    while(n != 0)
    {
        remainder = n % 10;
        reversedNum = reversedNum * 10 + remainder;
        n /= 10;
    }
    printf("Reversed number: %d\n", reversedNum);
}
void calculatingFactorial()
{
    printf("\nCalculating the factorial of a given positive integer using a for loop.\n\n");
    int i, n;
    unsigned long long factorial = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    printf("Factorial of %d = %llu\n", n, factorial);
}
void primeNum()
{
    printf("\nChecking whether a given positive integer is prime or not using a for loop.\n\n");
    int n, i, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        printf("%d is prime\n", n);
    }
    else
    {
        printf("%d is not prime\n", n);
    }
}
void sumofSeries()
{
    printf("\nComputing the sum of the series: 1 + 1/2 + 1/3 + ... + 1/n using a for loop.compute the sum of the series: 1 + 1/2 + 1/3 + ... + 1/n using a for loop.\n\n");
    int i, n;
    double sum = 0.0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        sum += 1.0 / i;
    }
    printf("Sum of the series: %.6f\n", sum);
}
void palindromeNum()
{
    printf("\nChecking whether a given number is a palindrome number using a while loop.\n\n");
    int n, reversedNum = 0, remainder, originalNum;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    originalNum = n;
    while(n != 0)
    {
        remainder = n % 10;
        reversedNum = reversedNum * 10 + remainder;
        n /= 10;
    }
    if(originalNum == reversedNum)
    {
        printf("%d is a palindrome.\n", originalNum);
    }
    else
    {
        printf("%d is not a palindrome.\n", originalNum);
    }
}
void armstrongNum()
{
    printf("\nChecking whether a given number is an Armstrong number using a while loop.\n\n");
    int num, originalNum, remainder, n = 0;
    double result = 0.0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    originalNum = num;
    while (originalNum != 0)
    {
        originalNum /= 10;
        n++;
    }
    originalNum = num;
    while (originalNum != 0)
    {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }
    if((int)result == num)
    {
        printf("%d is an Armstrong number.\n", num);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", num);
    }
}
void sumofOdddigitsandEvendigits()
{
    printf("\nFinding the sum of odd digits and even digits of a number using a while loop.\n\n");
    int n, oddSum = 0, evenSum = 0, digit;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    while(n != 0)
    {
        digit = n % 10;
        if(digit % 2 == 0)
        {
            evenSum += digit;
        }
        else
        {
            oddSum += digit;
        }
        n /= 10;
    }
    printf("Sum of odd digits: %d\n", oddSum);
    printf("Sum of even digits: %d\n", evenSum);
}
void series1()
{
    printf("\nDisplaying 1, 2, 3, 4, ... ... ... 99, 100 using for loop.\n\n");
    int i;
    for(i = 1; i <= 100; i++)
    {
        printf("%d\t", i);
    }
}
void series2()
{
    printf("\nDisplaying 5, 10, 15, ... ... ... 95, 100 using while loop.\n\n");
    int i = 5;
    while(i <= 100)
    {
        printf("%d\t", i);
        i = i + 5;
    }
}
void series3()
{
    printf("\nDisplaying 1, 2, 3, 4, ... ... ... n using do-while loop.\n\n");
    int i = 1, n;
    printf("\nEnter the value of n: ");
    scanf("%d", &n);
    do
    {
        printf("%d\t", i);
        i++;
    }
    while(i <= n);
}
void series4()
{
    printf("\nDisplaying 100, 98, 96, ... ... ... 6, 4, 2 using for loop.\n\n");
    int i;
    for(i = 100; i >= 1; i = i - 2)
    {
        printf("%d\t", i);
    }
}
void series5()
{
    printf("\nDisplaying A, B, C, D, ... ... ... X, Y, Z using while loop.\n\n");
    int i = 'A';
    while(i <= 'Z')
    {
        printf("%c\t", i);
        i++;
    }
}
void series6()
{
    printf("\nDisplaying b, d, f, ... ... ... x, z using do-while loop.\n\n");
    int i = 'b';
    do
    {
        printf("%c\t", i);
        i = i + 2;
    }
    while(i <= 'z');
}
void SumofSeries1()
{
    printf("\nCalculating the summation of 1 + 2 + 3 + ... ... ... + 99 + 100 using for loop.\n\n");
    int i, sum = 0;
    for(i = 1; i <= 100; i++)
    {
        sum += i;
    }
    printf("Summation of 1 + 2 + 3 + ... ... ... + 99 + 100 is: %d\n", sum);
}
void SumofSeries2()
{
    printf("\nCalculating the summation of 1 + 3 + 5 + ... ... ... + 97 + 99 using while loop.\n\n");
    int i = 1, sum = 0;
    while(i <= 100)
    {
        sum += i;
        i += 2;
    }
    printf("Summation of 1 + 3 + 5 + ... ... ... + 97 + 99 is: %d\n", sum);
}
void SumofSeries3()
{
    printf("\nCalculating the summation of 2 + 4 + 6 + ... ... ... + 98 + 100 using do-while loop.\n\n");
    int i = 2, sum = 0;
    do
    {
        sum += i;
        i += 2;
    }
    while(i <= 100);
    printf("Summation of 2 + 4 + 6 + ... ... ... + 98 + 100 is: %d\n", sum);
}
void charactertype()
{
    printf("\nChecking whether a character is a VOWEL or CONSONANT using a switch statement.\n\n");
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    switch(ch)
    {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("%c is a VOWEL.\n", ch);
        break;
    default:
        printf("%c is a CONSONANT.\n", ch);
    }
}
void leapyear()
{
    printf("\nChecking if a given year is a leap year using switch.\n\n");
    int year, leapyear;
    printf("Enter a year: ");
    scanf("%d", &year);
    leapyear = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
    switch(leapyear)
    {
    case 1:
        printf("%d is leap year\n", year);
        break;
    case 0:
        printf("%dis not leap year\n", year);
        break;
    }
}
void gendercheck()
{
    printf("\nReading a gender using a switch statement.\n\n");
    char gender;
    printf("Enter a gender character (M/m/F/f): ");
    scanf(" %c", &gender);
    switch(gender)
    {
    case 'M':
    case 'm':
        printf("Gender: Male\n");
        break;
    case 'F':
    case 'f':
        printf("Gender: Female\n");
        break;
    default:
        printf("Invalid input! Please enter 'M', 'm', 'F', or 'f'.\n");
    }
}
void weekdaycheck()
{
    printf("\nReading a weekday using a switch statement.\n\n");
    int day;
    printf("Enter Day number: ");
    scanf("%d", &day);
    switch(day)
    {
    case 1:
        printf("The day is Saturday\n");
        break;
    case 2:
        printf("The day is Sunday\n");
        break;
    case 3:
        printf("The day is Monday\n");
        break;
    case 4:
        printf("The day is Tuesday\n");
        break;
    case 5:
        printf("The day is Wednesday\n");
        break;
    case 6:
        printf("The day is Thursday\n");
        break;
    case 7:
        printf("The day is Friday\n");
        break;
    default:
        printf("Invalid Day Number\n");
    }
}
void first10EvenNumbers()
{
    printf("\nPrinting the first 10 Even numbers.\n\n");
    int i;
    for(i = 1; i <= 10; i++)
    {
        printf("%d\t", i * 2);
    }
}
void first10OddNumbers()
{
    printf("\nPrinting the first 10 Odd numbers.\n\n");
    int i;
    for(i = 1; i <= 10; i++)
    {
        printf("%d\t", i * 2 - 1);
    }
}
void first10FibNumbers()
{
    printf("\nPrinting the first 10 numbers of the Fibonacci series.\n\n");
    int n1 = 0, n2 = 1, next, i;
    for(i = 1; i <= 10; i++)
    {
        printf("%d\t", n1);
        next = n1 + n2;
        n1 = n2;
        n2 = next;
    }
}
void first10NaturalNumbers()
{
    printf("\nPrinting the first 10 Natural numbers.\n\n");
    int i;
    for(i = 1; i <= 10; i++)
    {
        printf("%d\t", i);
    }
}
void greetings()
{
    printf("Have a Nice Day!");
}
