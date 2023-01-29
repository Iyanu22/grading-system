// Online C compiler to run C program online

#include <stdio.h>

//program to calculate the gradng system of a school using If statement

int main() {

    int score;

    printf("Enter your score\n");

    scanf("%d\n", &score);

    if (score >= 70 && score <= 100)

    {

        printf("A\n");

    }

    else if (score >= 60 && score <= 69)

    {

        printf("B\n");

    }

    else if (score >= 50 && score <= 59)

    {

        printf("C");

    }

    else if (score >= 40 && score <= 49)

    {

        printf("D");

    }

    else if (score >= 30 && score <= 39)

    {

        printf("E");

    }

    else if (score >= 0 && score <= 29)

    {

        printf("F");

    }

    return (0);

}
