#include <stdio.h>
#include <cs50.h>


void generator(score[]);

int main(void)
{
    // Get input from the user:
    score[3] = get_int("Score : ");


    // Generate first bar:
    printf("Score 1: ");
    generator(score[0]);

    // Generate first bar:
    printf("Score 2: ");
    generator(score[1]);


    // Generate first bar:
    printf("Score 3: ");
    generator(score[2]);
}





// Bar Generator:

void generator(score[])
{
    for (int i = 1; i <= s; i++)
    {
        printf("#");
    }
    printf("\n");
}