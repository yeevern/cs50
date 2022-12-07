// Modifies the volume of an audio file

#include <stdint.h>  // for uint8_t - is a type that stores an 8-bit unsigned (i.e., not negative) integer
#include <stdio.h>
#include <stdlib.h>

// Number of bytes in .wav header
const int HEADER_SIZE = 44;

int main(int argc, char *argv[])
{
    // Check command-line arguments
    if (argc != 4)
    {
        printf("Usage: ./volume input.wav output.wav factor\n");
        return 1;
    }

    // Open files and determine scaling factor
    FILE *input = fopen(argv[1], "r");
    if (input == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    FILE *output = fopen(argv[2], "w");
    if (output == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    float factor = atof(argv[3]);  // atof() - converts a string to a floating point num

    // TODO: Copy header from input file to output file
    uint8_t header[HEADER_SIZE];
    fread(header, HEADER_SIZE, 1, input);
    fwrite(header, HEADER_SIZE, 1, output);


    // TODO: Read samples from input file and write updated data to output file
    int16_t buffer;  // temporary var
    while (fread(&buffer, sizeof(int16_t), 1, input))  // reading into that buffer via its addr, the size of a byte, specifically one byte from the source file
    {
        buffer *= factor;
        fwrite(&buffer, sizeof(int16_t), 1, output);  // writing from that buffer, the size of byte, specifically one byte to the destination
    }

    // Close files
    fclose(input);
    fclose(output);
}


// uint8_t is a type that stores an 8-bit unsigned (i.e., not negative) integer. We can treat each byte of a WAV file’s header as a uint8_t value.
// int16_t is a type that stores a 16-bit signed (i.e., positive or negative) integer. We can treat each sample of audio in a WAV file as an int16_t value.