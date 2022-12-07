// In C, we can actually see the address with the & operator, which means “get the address of this variable”:
// %p is the format code for an address.
// #include <stdio.h>

// int main(void)
// {
//     int n = 50;
//     printf("%p\n", &n);  // & - tell us what addr a var is at
// }

// The * operator, or the dereference operator, lets us “go to” the location that a pointer is pointing to.
// For example, we can print *&n, where we “go to” the address of n, and that will print out the value of n, 50,
// since that’s the value at the address of n
#include <stdio.h>

int main(void)
{
    int n = 50;
    printf("%i\n", *&n);  // * - "go to" that addr (or can straight print n because *&n refers to n)
}