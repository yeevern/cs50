#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x;
    printf("x: ");
    scanf("%i", &x);  // scanf() is a function that takes input from the user using %_ then put the value in address of x
    printf("x: %i\n", x);


    // We can try to get a string the same way:
    char *s = malloc(4);  // or char s[4]; (if use this, then no need to code free())
    printf("s: ");
    scanf("%s", s);  // no need to use &s because s is fundamentally an addr
    printf("s: %s\n", s);

    free(s);
}

// Now, if the user types in a string of length 3 or less, our program will work safely.
// But if the user types in a longer string, scanf might be trying to write past the end of our array into
// unknown memory, causing our program to crash.

// get_string from the CS50 library continuously allocates more memory as scanf reads in more characters, so it doesn’t have that issue.