#include <stdio.h>
#include <cs50.h>
#include <string.h>

const int KEY = 14;

int main(int argc, string argv[])
{
    string input = argv[1];
    string output;
    for (int i = 0, n = strlen(input); i < n; i++)
    {
        output = ((int) input[i]) + KEY;

        // int ascii = (int) input[i];
        // ascii += KEY;
        // for (int j = 0; j < n; j++)
        // {

        // }
    }
    printf("Message: %s\n", output);
}