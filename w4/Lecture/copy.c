// #include <cs50.h>
// #include <ctype.h>  // for toupper()
// #include <stdio.h>

// int main(void)
// {
//     char *s = get_string("s: ");

//     char *t = s;

//     t[0] = toupper(t[0]);  // capitalise the 1st char in t, but..

//     printf("s: %s\n", s);  // but, why the 1st char in s is also capitalise?
//     printf("t: %s\n", t);  // because when we copy, t from s, we are copying the addr, so I'm changing the 1st char in the same string
// }


// To actually make a copy of a string, we have to do a little more work, and copy EACH CHARACTER in s to
// somewhere else in memory:
// malloc() - return some new chunk of memory (return value is going to be the addr of the 1st byte of that memory)
// everytime you use malloc(), you have to use free()
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>  // for malloc (stdlib = standard library)
#include <string.h>  // for strlen()

int main(void)
{
    char *s = get_string("s: ");

    // char *t = malloc(4x);  / bad style
    // We already know the length of s, and we add 1 to that for the terminating null character.
    char *t = malloc(strlen(s) + 1);  // malloc - memory allocation, we allocate some num of bytes in memory (that aren't already used to store other values)

    // NULL here is not same as NUL(or known as \0), NULL represents a nul pointer(absence of an addr), NUL is for characters, NULL is for pointers
    if (t == NULL)  // error checking (when it is out of memory, then stop the program)
    {
        return 1;
    }

    for (int i = 0, n = strlen(s); i < n + 1; i++)  // here use <= n because we need to include the terminating nul character (or we can do < n+1)
    {
        t[i] = s[i];  // copy from s, each of the char one at a time into t
        // *(t+i) = *(s+i);  // can also write like this
    }

    // We could also check that t has a length, before trying to capitalize the first character.
    if (strlen(t) > 0)  // error checking (if use just hit enter)
    {
        t[0] = toupper(t[0]);
        // *t = toupper(*t);  // can also write like this
    }

    printf("s: %s\n", s);
    printf("t: %s\n", t);

    // Finally, we should free the memory we allocated earlier, which marks it as usable again by some other program.
    // We call the free function and pass in the pointer t, since we’re done with that chunk of
    // memory. (get_string, too, calls malloc to allocate memory for strings, and calls free just before the
    // main function returns.)
    free(t);
}


// We can also use strcpy
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>  // for malloc()
#include <string.h>  // for strlen(), strcpy()

int main(void)
{
    char *s = get_string("s: ");

    char *t = malloc(strlen(s) + 1);

    strcpy(t, s);  // strcpy(char *dest, char *src)

    t[0] = toupper(t[0]);

    printf("s: %s\n", s);
    printf("t: %s\n", t);

    free(t);  // best practise to free the memory after you done with it, or else your computer will run out of memory
}