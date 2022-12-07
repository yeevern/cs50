#include <cs50.h>
#include <stdio.h>
#include <string.h>


// The first argument, argv[0], is the name of our program (the first word typed, like ./hello).
// In this example, we check if we have two arguments, and print out the second one if so.

int main(int argc, string argv[])  // argc-arguement count; argv-arguement vector
{
    // EXAMPLE 1
    // if (argc == 2)
    // {
    //     printf("hello, %s\n", argv[1]);
    // }
    // else
    // {
    //     printf("hello, world\n");
    // }


    // EXAMPLE 2
    // We can print out each character individually, too:
    if (argc == 2)
    {
        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            printf("%c\n", argv[1][i]);
        }
    }
}