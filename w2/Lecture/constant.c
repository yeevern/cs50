#include <cs50.h>
#include <stdio.h>

const int TOTAL = 3;

// float average(int length, int array[]);

int main(void)
{
    // METHOD 1
    int scores[TOTAL];
    for (int i = 0; i < TOTAL; i++)
    {
      scores[i] = get_int("Score: ");
    }

    printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / (float) TOTAL);


    // METHOD 2
//     int scores[TOTAL];
//     for (int i = 0; i < TOTAL; i++)
//     {
//       scores[i] = get_int("Score: ");
//     }

//     printf("Average: %f\n", average(TOTAL, scores));
// }

// float average(int length, int array[])
// {
//     int sum = 0;
//     for (int i = 0; i < length; i++)
//     {
//         sum += array[i];
//     }
//     return sum / (float) length;
}