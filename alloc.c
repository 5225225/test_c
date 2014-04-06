#include <stdio.h>

#define ALLOCSIZE 10000

static char allocbuf[ALLOCSIZE];
static char *allocp = allocbuf;

char *alloc(int n) {
    if (allocbuf + ALLOCSIZE - allocp >= n) {
        allocp += n;
        return allocp - n;
    } else 
        return 0;
}

void afree(char *p) {
    if (p >= allocbuf && p < allocbuf + ALLOCSIZE)
        allocp = p;
}

int main() {
    char* x;
    int* y;
    char m = 'A';
    int n[2];

    n[0] = 34;
    n[1] = 56;
    y = &n;

    x = alloc(1);
    *x = 5;
    printf("sizeof: %i\n", sizeof(n));
    printf("*x: %p\n", y);
    printf("y[0]:  %i\n", *y);
    ++y;
    printf("*x: %p\n", y);
    printf("y[1]: %i\n", *y);
    return 0;
}
