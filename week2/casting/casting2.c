#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string s = get_string("\nInput: ");
    printf("\n\nOutput:\n");
    for (int i = 0; s[i] != '\0'; i++)
    {
        printf("%c ==>  %i\n", s[i], s[i]);
    }
    printf("\n\n");
}