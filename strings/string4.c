#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string s = get_string("Name: ");
    int n = 0;

    // \0 is the null character:

    while(s[n] != '\0')
    {
        n++;
    }
    printf("The length of your name is %i\n", n);
}