#include <stdio.h>
#include <cs50.h>

int get_positive_1to8(void);
void artist(int h);


int main(void)
{
    int height = get_positive_1to8();
    artist(height);

}


// getting just positive values in the inclusive range of 1 to 8:

int get_positive_1to8(void)
{
    while (1 == 1)
    {
        int h = get_int("Height: ");
        if (h >= 1 && h <= 8)
        {
            return h;
        }
    }
}




// pattern drawing function:

void artist(int h)
{
    int d = h + 1;                                          // decrementer for the if condition below:
    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= h; j++)
        {
            if (j >= d - i)
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