// #include <stdio.h>

// int main(void) {  // w2 stuff
//     int list[3];  // if use [n] you cannot re-size your array(put in stack); unless you use malloc(put in heap)

//     list[0] = 1;
//     list[1] = 2;
//     list[2] = 3;

//     for (int i = 0; i < 3; i++) {
//         printf("%i\n", list[i]);
//     }
// }


#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Use malloc to allocate enough space for an array with 3 integers
    int *list = malloc(3 * sizeof(int));  // 3 space of int
    if (list == NULL)  // anytime you use malloc, need to check list == NULL (assuming smtg went worng/out of memory)
    {
        return 1;
    }

    // Set the values in our array
    list[0] = 1;  // can also write *list = 1
    list[1] = 2;  // can also write *(list+1) = 2
    list[2] = 3;  // can also write *(list+2) = 3

    // Now if we want to store another value, we can allocate more memory
    int *tmp = malloc(4 * sizeof(int));  // 4 * size of int because we want 4 element | can use int *tmp = realloc(list, 4 * sizeof(int)); also and if use this we dun need to copy list of size 3 into list of size 4 in line 44, and also line 53
    // int *tmp = realloc(list, 4 * sizeof(int));
    if (tmp == NULL)
    {
        free(list);  // if went wrong, free the memory back
        return 1;
    }

    // if it is not NULL
    // Copy list of size 3 into list of size 4
    for (int i = 0; i < 3; i++)
    {
        tmp[i] = list[i];
    }

    // Add new number to list of size 4
    tmp[3] = 4;  // tmp[3] - which is the 4th location

    // Free original list of size 3
    free(list);

    // Remember new list of size 4
    list = tmp;  // update my old list to point at the new list

    // Print list
    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]);
    }

    // Free new list
    free(list);  // no need to free tmp bcuz I already reassign it in line 56
}

// Recall that malloc allocates and frees memory from the heap area. It turns out that we can call another library function, realloc, to reallocate some memory that we allocated earlier:
// int *tmp = realloc(list, 4 * sizeof(int));
// And realloc copies our old array, list, for us into a bigger chunk of memory of the size we pass in. If there happens to be space after our existing chunk of memory, we’ll get the same address back, but with the memory after it allocated to our variable as well.