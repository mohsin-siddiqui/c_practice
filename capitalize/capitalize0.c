#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string s = get_string("Input:> ");
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] -= ('a' - 'A');
        }
    }
    printf("Output:> %s\n", s);
}