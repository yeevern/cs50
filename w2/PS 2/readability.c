#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) {
    string s = get_string("Text: ");
    int letters = 0;
    int sentences = 0;
    int words = 0;
    float L, S;
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == ' ') {
            words++;
        }
        else if (((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122))) {
            letters++;
        }
        else if (s[i] == '!' || s[i] == '.' || s[i] == '?') {
            sentences++;
        }
    }
    words++;
    L = ((float)letters / (float)words) * 100;
    S = ((float)sentences / (float)words) * 100;

    // printf("letters: %i, sentences: %i, words: %i", letters, sentences, words);
    // printf("\n");
    // printf("L: %.2f S: %.2f",L,S);

    float index = 0.0588 * L - 0.296 * S - 15.8;
    int index2 = round(index);
    // printf("\n");
    if (index2 >= 16) {
        printf("Grade 16+");
    } else if (index2 < 1) {
        printf("Before Grade 1");
    } else{
        printf("Grade %i", index2);
    }
    printf("\n");
    return 0;

}