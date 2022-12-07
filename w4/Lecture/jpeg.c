#include <stdint.h>
#include <stdio.h>

// First, we define a BYTE as 8 bits, so we can refer to a byte as a type more easily in C
// Then, we try to open a file (checking that we indeed get a non-NULL file back), and read the first three bytes from the file with fread, into a buffer called bytes.
// We can compare the first three bytes (in hexadecimal) to the three bytes required to begin a JPEG file. If they’re the same, then our file is likely to be a JPEG file (though, other types of files may still begin with those bytes). But if they’re not the same, we know it’s definitely not a JPEG file.

typedef uint8_t BYTE;  // declares a data type called BYTE, using another arcane data type called uint_t

int main(int argc, char *argv[])
{
    // Check usage
    if (argc != 2)
    {
        return 1;
    }

    // Open file
    FILE *file = fopen(argv[1], "r");
    if (!file)  // or can write as file == NULL
    {
        return 1;
    }

    // Read first three bytes
    BYTE bytes[3];  // an array of 3 bytes
    fread(bytes, sizeof(BYTE), 3, file);  // fread - reads from a file (it reads into the 1st arg(bytes), the size of BYTE, and reads in as many as 3 data types from this file, from the 4th arg(file))
    // So, conclude: it reads from this file(which is arg 4), 3 bytes into this array(which is bytes)

    // Check first three bytes
    if (bytes[0] == 0xff && bytes[1] == 0xd8 && bytes[2] == 0xff)  // fixed (look up in the manual for jpegs)
    {
        printf("Maybe\n");
    }
    else
    {
        printf("No\n");
    }

    // Close file
    fclose(file);
}