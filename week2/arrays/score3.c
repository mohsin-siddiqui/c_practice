#include <stdio.h>
#include <cs50.h>

void generator(int score);

int main(void)
{
    int n = 3;
    int scores[n];

    // Get scores from the user:
    for (int i = 0; i < n; i++)
    {
        scores[i] = get_int("Score %i: ", i + 1);
    }


    // Chart Scores:
    for (int i = 0; i < n; i++)
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