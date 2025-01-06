#include <stdio.h>
int main()
{
    int marks;
    printf("Enter the marks: ");
    scanf("%d", &marks);
    if (marks >= 80 && marks <= 100)
        printf("\nGrade: A+\n");
    else if (marks >= 70 && marks <= 79)
        printf("\nGrade: A\n");
    else if (marks >= 60 && marks <= 69)
        printf("\nGrade: A-\n");
    else if (marks >= 50 && marks <= 59)
        printf("\nGrade: B\n");
    else if (marks >= 40 && marks <= 49)
        printf("\nGrade: C\n");
    else if (marks >= 33 && marks <= 39)
        printf("\nGrade: D\n");
    else if (marks >= 0 && marks <= 32)
        printf("\nGrade: F\n");
    else
        printf("\nInvalid marks entered.\n");
    return 0;
}
