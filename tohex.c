#include <stdio.h>

int main() {
    int chr;
    int wrap = 0;
    int width = 80;
    while ((chr = getchar()) != EOF) {
        if (wrap >= width) {
            printf("\n");
            wrap = 0;
        }
        printf("%.2X", chr);
        wrap = wrap + 2;
    }
    printf("\n");
}
