#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string s = get_string("Input: ");
    printf("Output:\n");

    // int i = 0;
    // while(s[i] != '\0')
    // {
    //     printf("%c\n", s[i]);
    //     i++;
    // }



    for (int i =0; s[i] != '\0'; i++)
    {
        printf("%c\n", s[i]);
    }
}