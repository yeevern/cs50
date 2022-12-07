#include <stdio.h>
#include <cs50.h>

int main(void) {
    int numbers[] = {4,6,8,2,7,5,0};  // if u knw in advance the nums tat u wanna assign to an array, u acctually dun have to bother specifying the size of the array

    for (int i = 0; i < 7; i++) {
        if (numbers[i] == 0) {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}