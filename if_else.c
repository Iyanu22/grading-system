// Online C compiler to run C program online

#include <stdio.h>

/**
 * description: A program for a school gradig system
 * 80 - 100 == A
 * 70 - 79 == B
 * 65 - 69 == C
 * 60 - 64 == D
 * 50 - 59 == E
 * 0 - 40 == F
 */

int main() {

    int score;

    printf("Enter your score\n");

    scanf("%d\n", &score);

    if (score >= 80 && score <= 100)

    {

        printf("A\n");

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

    else if (score >= 0 && score <= 40)

    {

        printf("F");

    }
    else
	{
		printf("The grade you entered is invalid");
	}

    return (0);

}
