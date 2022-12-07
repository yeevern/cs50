#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // METHOD 1
    // int scores[3];
    // scores[0] = get_int("Score: ");
    // scores[1] = get_int("Score: ");
    // scores[2] = get_int("Score: ");

    // // Print average
    // printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);


    // METHOD 2
    int scores[3];
    for (int i = 0; i < 3; i++)
    {
      scores[i] = get_int("Score: ");
    }

    // Print average
    printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);

}