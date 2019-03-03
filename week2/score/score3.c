#include <stdio.h>
#include <cs50.h>

const int COUNT = 3;

void chart(int count, int scores[]);

int main(void)
{
    int scores[COUNT];
    for (int i = 0; i < COUNT; i++)
    {
        scores[i] = get_int("Score %i: ", i + 1);
    }

    chart(COUNT, scores);
}

void chart(int count, int scores[])
{
    for (int i = 0; i < COUNT; i++)
    {
        for (int j = 0; j < scores[i]; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}