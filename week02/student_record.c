#include <stdio.h>

int main()
{
    char initial;
    int regNo;
    double gpa;
    int year;

    printf("Enter initial : ");
    scanf(" %c", &initial);

    printf("Enter reg. no. : ");
    scanf("%d", &regNo);

    printf("Enter GPA : ");
    scanf("%lf", &gpa);

    printf("Enter year : ");
    scanf("%d", &year);

    printf("----------------------------\n");
    printf("Initial  : %c\n", initial);
    printf("Reg. No. : %d\n", regNo);
    printf("GPA      : %.2lf\n", gpa);
    printf("Year     : %d\n", year);

    return 0;
}