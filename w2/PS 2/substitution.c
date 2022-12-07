#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[]) {
    if (argc == 2) {
        string key = argv[1];
        if (strlen(key) == 26) {
            for (int i = 0; i < strlen(key); i++) {
                if (!isalpha(key[i])) {
                    printf("All Key must be an Alphabeth\n");
                    return 1;
                }
                for (int j = i+1; j < strlen(key); j++) {
                    if (key[i] == key[j]) {
                        printf("Key must not contain repeated alphabeth\n");
                        return 1;
                    }
                }
            }

            string text = get_string("plaintext: ");
            printf("ciphertext: ");
            for (int k = 0; k < strlen(text); k++) {
                char c = text[k];
                if (isupper(c)) {
                    printf("%c",toupper(key[c-65]));
                }
                else if (islower(c)){
                    printf("%c",tolower(key[c-97]));
                }
                else {
                    printf("%c", c);
                }
            }
            printf("\n");
            return 0;


        } else {
            printf("Key must contain 26 characters.\n");
            return 1;
        }

    } else {
        printf("Usage: ./substitution key\n");
        return 1;
    }
}