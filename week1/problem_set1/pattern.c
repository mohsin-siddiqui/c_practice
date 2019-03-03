#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 8; i++)
    {
        for (int j = 1; j <= 18; j++)
        {
            if ((j >= 9 -i && j <= 8) || (j <= 10 + i && j >= 11))
            {
                printf("#");
            }

            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}