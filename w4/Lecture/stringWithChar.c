#include <stdio.h>

int main(void)
{
    // We can print out each character in a string (using char * directly):
    // char *s = "HI!";  // char * - represents the address of a char, the star symbol here is declaring a pointer
    // printf("%c\n", s[0]);
    // printf("%c\n", s[1]);
    // printf("%c\n", s[2]);


    // But we can go to addresses directly:
    char *s = "HI!";
    printf("%c\n", *s);  // s here is storing an addr(by defination being a pointer), *s here means go to the addr
    printf("%c\n", *(s+1));
    printf("%c\n", *(s+2));
    printf("%c\n", *(s+3));  // terminating nul char and it wouldn't print out unless u use %i
    printf("%c\n", *(s+1000000));  //  segmentation fault - or crash as a result of our program touching memory in a segment it shouldn’t have.
}