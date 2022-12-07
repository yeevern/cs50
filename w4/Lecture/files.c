#include <cs50.h>
#include <stdio.h>
#include <string.h>

// We use argv to get arguments, using them as filenames to open files to read from and one to write to.
// Then, we read one byte from the source file into a buffer, and write that byte to the destination file. We can use a while loop to call fread, which will stop once there are no more bytes to read

int main(void)
{
    FILE *file = fopen("phonebook.csv", "a");  // FILE is a data type that does come with C that represents a file; and then give a pointer to a FILE and call the var file
    if (file == NULL)
    {
        return 1;
    }

    char *name = get_string("Name: ");
    char *number = get_string("Number: ");

    fprintf(file, "%s,%s\n", name, number);  // fprintf - print to a file; the 1st arg is the pointer to the file that you want to send this new strings to

    fclose(file);  // close the file
}