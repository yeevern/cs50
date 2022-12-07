#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

typedef uint8_t BYTE;

int main(int argc, char *argv[])
{
    // Ensure proper usage
    if (argc != 3)
    {
        fprintf(stderr, "Usage: copy SOURCE DESTINATION\n");
        return 1;
    }

    // open input file
    FILE *source = fopen(argv[1], "r");  // read from one ...
    if (source == NULL)
    {
        printf("Could not open %s.\n", argv[1]);
        return 1;
    }

    // Open output file
    FILE *destination = fopen(argv[2], "w");  // ... and wite to the other
    if (destination == NULL)
    {
        fclose(source);
        printf("Could not create %s.\n", argv[2]);
        return 1;
    }

    // Copy source to destination, one BYTE at a time
    BYTE buffer;  // temporary var
    while (fread(&buffer, sizeof(BYTE), 1, source))  // reading into that buffer via its addr, the size of a byte, specifically one byte from the source file
    {
        fwrite(&buffer, sizeof(BYTE), 1, destination);  // writing from that buffer, the size of byte, specifically one byte to the destination
    }

    // Close files
    fclose(source);
    fclose(destination);
    return 0;
}