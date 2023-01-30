// Grading system using if else statement
#include <stdio.h>
/** 
 * main - Gradin system
 * description - program to calculate the grading system of a school using If statement
 * 80 - 100 == A
 * 70 - 79 == B
 * 65 - 69 == C
 * 60 - 64 == D
 * 50 - 59 == E
 * 0 - 49 == F
 */
int main() {
    int score;
    printf("Enter your score\n");
    scanf("%d", &score);
    if (score >= 80 && score <= 100)
    {
        printf("A\n");
        if (score >= 95)
        {
            printf("You got a distinction grade\n");
        }
        else if (score >=80 && score <= 94)
        {
            printf("You got a excellent grade\n");
        }
    }
    else if (score >= 70 && score <= 79)
    {
        printf("B\n");
    }
    else if (score >= 65 && score <= 69)
    {
        printf("C");
    }
    else if (score >= 60 && score <= 64)
    {
        printf("D");
    }
    else if (score >= 50 && score <= 59)
    {
        printf("E");
    }
    else if (score >= 0 && score <= 49)
    {
        printf("F");
    }
    return (0);
}
