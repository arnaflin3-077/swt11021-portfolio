#include <stdio.h>

int main()
{
    int score;

    printf("Enter score (0-100): ");
    scanf("%d", &score);

    if(score < 0 || score > 100)
    {
        printf("Invalid Score\n");
        return 0;
    }

    switch(score / 10)
    {
        case 10:
        case 9:
        case 8:
            printf("Grade A - Excellent\n");
            break;

        case 7:
            printf("Grade B - Very Good\n");
            break;

        case 6:
            printf("Grade C - Good\n");
            break;

        case 5:
            printf("Grade D - Pass\n");
            break;

        default:
            printf("Grade F - Fail\n");
    }

    return 0;
}