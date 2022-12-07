#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string names[] = {"Bill", "Charlie", "Fred", "George", "Ginny", "Percy", "Ron"};

    for (int i = 0; i < 7; i++)
    {
        if (strcmp(names[i], "Ron") == 0)  // in string, cannot use names[i] == "Ron", need to use strcmp (string compare)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}

// If we only check for strcmp(names[i], "Ron") and not strcmp(names[i], "Ron") == 0, then we’ll print Found even if the name
// isn’t found. This is because strcmp returns a value that isn’t 0 if two strings don’t match, and any nonzero value is
// equivalent to true in a condition.