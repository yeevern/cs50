#include <cs50.h>
#include <stdio.h>

    // It turns out that our main function also returns an integer value. By default,
    // our main function returns 0 to indicate nothing went wrong, but we can write a program to return a different value:

int main(int argc, string argv[])  // why always use int main? :because return 0
{
    if (argc != 2)
    {
        printf("missing command-line argument\n");
        return 1;
    }
    printf("hello, %s\n", argv[1]);
    return 0;
}