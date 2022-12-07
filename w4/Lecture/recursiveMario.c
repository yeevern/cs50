 // RECURSIVE CODE
#include <cs50.h>
#include <stdio.h>

void draw(int h);

int main(void)
{
    int height = get_int("Height: ");
    draw(height);
}

void draw(int h)
{
    // base case
    if (h == 0)
    {
        return;
    }

    draw(h - 1);

    for (int i = 0; i < h; i++)
    {
        printf("#");
    }
    printf("\n");
}


// NORMAL CODE
// #include <cs50.h>
// #include <stdio.h>

// void draw(int h);

// int main(void)
// {
//     int height = get_int("Height: ");
//     draw(height);
// }

// void draw(int h)
// {
//     for (int i = 1; i <= h; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("#");
//         }
//         printf("\n");
//     }
// }