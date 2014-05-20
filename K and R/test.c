#include <stdio.h>
#include <stdbool.h>

volatile int i = 2;

bool rettrue() {
    i++;
    return true;
}

bool retfalse() {
    i++;
    return false;
}

int main() {
    int temp = retfalse() && rettrue();
    printf("True && False: %d\n", i);
}
