#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string s = get_string("Name: ");
    int count;
    for (int i = 0; s[i] != '\0'; i++)
    {
        count = i + 1;
    }
    printf("Length of your name is %i\n", count);
}