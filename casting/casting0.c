#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string s = get_string("Input: ");
    printf("\n\nOutput:\n");
    for (int i = 0; s[i] != '\0'; i++)
    {
        int ascii = (int) s[i];
        printf("%c ==>  %i\n", s[i], ascii);
    }
    printf("\n\n");
}