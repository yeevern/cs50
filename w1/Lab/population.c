#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int start;
    do
    {
        start = get_int("Start size: ");
    }
    while (start <= 8);

    int end;
    do
    {
        end = get_int("End size: ");
    }
    while (end < start);

    int n = 0;
    int total = 0;
    int born, dead;
    while (total<end && start != end){
        // printf("start: %i ", start);
        born = start/3;
        dead = start/4;
        total = start + born - dead;
        // printf("total: %i ", total);
        start = total;
        n++;
        // printf("Years: %i\n", n);
        
    }
    
    printf("Years: %i", n);
}