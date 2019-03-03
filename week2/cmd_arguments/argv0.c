#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    // checking if the number of augument i.e. argument count is 2 or not:
    if (argc == 2)
    {
        // printing second argument i.e. with index 1:
        printf("Hello, %s!!\n", argv[1]);
    }
    else
    {
        printf("Hello, World!!\n");
    }
}