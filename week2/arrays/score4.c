#include <stdio.h>
#include <cs50.h>

const int COUNT = 3;

void generator(int score);

int main(void)
{
    int scores[COUNT];

    // Get scores from the user:
    for (int i = 0; i < COUNT; i++)
    {
        scores[i] = get_int("Score %i: ", i + 1);
    }


    // Chart Scores:
    for (int i = 0; i < COUNT; i++)
    {
       printf("Score %i: ", i + 1);
       generator(scores[i]);
    }
}



// Bar Generator:

void generator(int score)
{
    // output one hash per point:
    for (int i = 1; i <= score; i++)
    {
        printf("#");
    }
    printf("\n");
}