#include <stdio.h>
#include <math.h>

int intlen(int inputnum, int base) {
    int num = inputnum;
    int lencount = 0;
    for(;;){
        num = num / base;
        lencount++;
        if(num == 0) {
            return(lencount);
        }
    }
}

/*
void itoa(int x, int base, char str[]) {
    int power = 1;
    int length = intlen(x, base);
    int num;
    for(int i=0; i<length; i++){
        num = (x/ (int) power % base);
        if(num < 10) {
            num = num + 48;
        } else {
            num = num + 55;
        }
        str[length-i-1] = num;
        power = power * base;
    }
    str[length] = '\0';
}

Kept for refrence, but just using sprintf is much cleaner, and most likely
quicker.
*/

void xtoa(int x, char str[]) {
    sprintf(str, "%x", x);
}

void itoa(int x, char str[]) {
    sprintf(str, "%d", x);
}

int main() {
    char string[4];
    int num = 1521;
    printf("num is: %d\n", num);
    itoa(num, string);
    printf("base 10: %s\n", string);
    xtoa(num, string);
    printf("base 16: %s\n", string);
    
}
