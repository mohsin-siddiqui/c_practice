#include <stdio.h>
#include <cs50.h>

void generator(int score);

int main(void)
{
    int scores[3];
    for (int i = 0; i < 3; i++)
    {
        scores[i] = get_int("Score %i: ", i);
    }

    for (int i = 0; i < 3; i++)
    {
       printf("Score %i: ", i);
       generator(scores[i]);
    }
}



// Bar Generator:

void generator(int score)
{
    for (int i = 1; i <= score; i++)
    {
        printf("#");
    }
    printf("\n");
}