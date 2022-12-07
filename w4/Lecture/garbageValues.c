// int main(void)
// {
//     int *x;
//     int *y;

//     x = malloc(sizeof(int));  // allocate 4 bytes

//     *x = 42;  // go to the address in x and store 42 in it
//     *y = 13;  // ERROR - bcuz you have not explicitly initialized y

//     y = x;  // now y is allocated 4 bytes (y = 42)

//     *y = 13;  // now it can go to the address in y and store 13 in it (this also change the value of x, bcuz y = x)
// }


// We can print out garbage values, by declaring an array but not setting any of its values:
#include <stdio.h>

int main(void)
{
    int scores[3];
    for (int i = 0; i < 3; i++)
    {
        printf("%i\n", scores[i]);
    }
}
// When we compile and run this program, we see various values printed.
