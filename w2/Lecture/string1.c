#include <cs50.h>
#include <stdio.h>
#include <string.h>  // for strlen()

int main(void)
{
    // EXAMPLE 1
    // string s = "HI!";
    // printf("%i %i %i %i\n", s[0], s[1], s[2], s[3]);

    // EXAMPLE 2
    // string s = get_string("Input:  ");
    // printf("Output: ");
    // for (int i = 0; i < strlen(s); i++)  // i < strlen(s) can also change to s[i] != '\0'
    // {
    //     printf("%c", s[i]);
    // }
    // printf("\n");

    // EXAMPLE 3 (put strlen() = n)
    string s = get_string("Input: ");
    printf("Output:\n");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c\n", s[i]);
    }
}