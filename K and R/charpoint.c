#include <stdio.h>

int main() {
    char amessage[] = "now is the time";
    char *pmessage = "now is the time";
    amessage[0] = 'h';
    printf("%s\n",amessage);
}
