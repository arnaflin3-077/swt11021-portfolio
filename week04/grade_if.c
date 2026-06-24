#include <stdio.h>

int main()
{
    int score;

    printf("Enter score (0-100): ");
    scanf("%d", &score);

    if(score < 0 || score > 100)
    {
        printf("Invalid Score\n");
    }
    else if(score >= 80)
    {
        printf("Grade A - Excellent\n");
    }
    else if(score >= 70)
    {
        printf("Grade B - Very Good\n");
    }
    else if(score >= 60)
    {
        printf("Grade C - Good\n");
    }
    else if(score >= 50)
    {
        printf("Grade D - Pass\n");
    }
    else
    {
        printf("Grade F - Fail\n");
    }

    return 0;
}