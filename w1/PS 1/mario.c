#include <cs50.h>
#include <stdio.h>

int main(void) {
    int n;
    do {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);


    for (int row = 1; row <= n; row++) {
        for (int space = n-row; space > 0; space--) {
            printf(" ");
        }
        for (int hash = 1; hash <= row; hash++) {
            printf("#");
        }
        printf("  ");
        for (int hash2 = 1; hash2 <= row; hash2++) {
            printf("#");
        }
        printf("\n");
    }
}