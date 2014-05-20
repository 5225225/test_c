#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[]) {
    int c;
    int lower = 0;
    if (lower) {
    while ((c = getchar()) != EOF)
        putchar(tolower(c));
    } else {
    while ((c = getchar()) != EOF)
        putchar(toupper(c));
    }
    return 0;
}
