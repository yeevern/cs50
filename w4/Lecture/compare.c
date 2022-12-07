#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Let’s try to compare two integers from the user:
    int i = get_int("i: ");
    int j = get_int("j: ");

    if (i == j)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }


    // When we try to compare two strings, we see that the same inputs are causing our program to print “Different”:
    // Why ? Because we are not comparing the char, we are comparing the addr
    char *s = get_string("s: ");  // char * is also same as string
    char *t = get_string("t: ");

    // The addr is different
    // printf("%p\n", s);
    // printf("%p\n", t);

    // if (s == t)
    // {
    //     printf("Same\n");
    // }
    // else
    // {
    //     printf("Different\n");
    // }


    // So to solve the problem, use strcmp
    if (strcmp(s, t) == 0)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }

}