#include <stdio.h>
//program to calculate the gradng system of a school using If statement
int main(void) 
{
    int score;
    printf("Enter your score\n");
    scanf("%d", &score);
   switch (score){
      //if the grade is between 70 -100
    case 70 ... 100:
    {
        printf("A\n");
        break;
    }
     //if the grade is between 60 -69
    case 60 ... 69:
    {
        printf("B\n");
        break;
    }
     //if the grade is between 50 -59
    case 50 ... 59:
    {
        printf("C\n");
        break;
    }
     //if the grade is between 40 -49
    case 40 ... 49:
    {
        printf("D\n");
        break;
    }
     //if the grade is between 30 -39
    case 30 ... 39:
    {
        printf("E\n");
        break;
    }
     //if the grade is between 70 -100
    case 0 ... 29:
    {
        printf("F\n");
        break;
    }
   }
    return (0);
}
