// Let’s try to swap the values of two integers.
// #include <stdio.h>

// void swap(int a, int b);

// int main(void)
// {
//     int x = 1;
//     int y = 2;

//     printf("x is %i, y is %i\n", x, y);
//     swap(x, y);
//     printf("x is %i, y is %i\n", x, y);
// }

// void swap(int a, int b)  // this is the wrong example because int does not store addr in the memory so when u swap, it only happens here, it won't change x and y
// {
//     int tmp = a;
//     a = b;
//     b = tmp;
// }


// Solution
// By passing in the address of x and y, our swap function can actually work
#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);
    swap(&x, &y);  // paas the address of x and y
    printf("x is %i, y is %i\n", x, y);
}

void swap(int *a, int *b)  // int * is a pointer(a var that stores the addr of some value), so now a is pointing at x
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}