#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // METHOD 1
    // string s = get_string("Before: ");
    // printf("After:  ");
    // for (int i = 0, n = strlen(s); i < n; i++)
    // {
    //     if (s[i] >= 'a' && s[i] <= 'z')
    //     {
    //         printf("%c", s[i] - 32);
    //     }
    //     else
    //     {
    //         printf("%c", s[i]);
    //     }
    // }
    // printf("\n");


    // METHOD 2 (using <ctype.h>)
    // string s = get_string("Before: ");
    // printf("After:  ");
    // for (int i = 0, n = strlen(s); i < n; i++)
    // {
    //     if (islower(s[i]))  // boolean - true/false
    //     {
    //         printf("%c", toupper(s[i]));
    //     }
    //     else
    //     {
    //         printf("%c", s[i]);
    //     }
    // }
    // printf("\n");


    // METHOD 3 (simplified)
    string s = get_string("Before: ");
    printf("After:  ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", toupper(s[i]));  // toupper expects as input a character, cannot pass a whole word to it
    }
    printf("\n");
}