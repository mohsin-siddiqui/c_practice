#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

int main(void)
{
    string s = get_string("Input:> ");
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (islower(s[i]))
        {
            s[i] = toupper(s[i]);
        }
    }
    printf("Output:> %s\n", s);
}