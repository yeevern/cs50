// WITHOUT struct
// #include <cs50.h>
// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     string names[] = {"Brian", "David"};
//     string numbers[] = {"+1-617-495-1000", "+1-949-468-2750"};

//     for (int i = 0; i < 2; i++)
//     {
//         if (strcmp(names[i], "David") == 0)
//         {
//             printf("Found %s\n", numbers[i]);
//             return 0;
//         }
//     }
//     printf("Not found\n");
//     return 1;
// }


// WITH struct
#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;  // 2 types of data that I want
    string number;
}
person;  // person data structure

int main(void)
{
    person people[2];  // an array of people of type person

    people[0].name = "Brian";  // people[0] means gif me the 1st person in the people array, and the dot means go inside of it and grab the person variable
    people[0].number = "+1-617-495-1000";

    people[1].name = "David";
    people[1].number = "+1-949-468-2750";

    for (int i = 0; i < 2; i++)
    {
        if (strcmp(people[i].name, "David") == 0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}