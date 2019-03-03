#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        printf("Hello, %s\n", argv[1]);
        return 0;

    }
    else if (argc > 2)
    {
        printf("Too many arguments\n\tExpected 2 got %i\n", argc);
        return 1;
    }
    else
    {
        printf("Command line argument's Missing\n\tExpected 2 got %i\n", argc);
        return 1;
    }
}