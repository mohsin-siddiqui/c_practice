#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(int argc, string argv[])
{
    for (int i = 0; i < argc; i++)
    {
        // n equals to the len of the particular argument at particular iteration:
        printf("=======>> %i :\n",i + 1);
        for (int j = 0, n = strlen(argv[i]); j < n; j++)
        {
            // argv[i] gives the argument and argv[i][j] gives the characters:
            printf("%c\n", argv[i][j]);
        }
        printf("\n");
    }
}