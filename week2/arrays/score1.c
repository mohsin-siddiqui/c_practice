#include <stdio.h>
#include <cs50.h>


void generator(int s);

int main(void)
{
    // Get input from the user:
    int score1 = get_int("Score1: ");
    int score2 = get_int("Score2: ");
    int score3 = get_int("Score3: ");

    // Generate first bar:
    printf("Score 1: ");
    generator(score1);

    // Generate first bar:
    printf("Score 2: ");
    generator(score2);


    // Generate first bar:
    printf("Score 3: ");
    generator(score3);
}





// Bar Generator:

void generator(int s)
{
    for (int i = 1; i <= s; i++)
    {
        printf("#");
    }
    printf("\n");
}