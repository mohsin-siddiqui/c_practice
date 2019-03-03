#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Get input from the user:
    int score1 = get_int("Score1: ");
    int score2 = get_int("Score2: ");
    int score3 = get_int("Score3: ");

    // Generate first bar:
    printf("Score 1: ");
    for (int i = 1; i <= score1; i++)
    {
        printf("#");
    }

    printf("\n");

    // Generate first bar:
    printf("Score 2: ");
    for (int i = 1; i <= score2; i++)
    {
        printf("#");
    }

    printf("\n");


    // Generate first bar:
    printf("Score 3: ");
    for (int i = 1; i <= score3; i++)
    {
        printf("#");
    }

    printf("\n");
}