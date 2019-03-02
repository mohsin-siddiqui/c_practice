#include <stdio.h>
#include <cs50.h>

// program to print all arguments one by one:
int main(int argc, string argv[])
{
    for (int i = 0; i < argc; i++)
    {
        printf("%i ==> %s\n", i +1, argv[i]);
    }
}