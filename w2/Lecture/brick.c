#include <stdio.h>

int main(void)
{
    char c = '#';

    printf("%c\n", c);
    printf("%i\n", (int) c);  // print ascii num, but we don't need to explicitly cast it, just use %i no need "(int)"
    printf("%i\n", c);
}