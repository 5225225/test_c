#include <stdio.h>

int main() {
    int i = 0;
    int sum = 0; //Remember to init your variables...
    for(i=1; i<1000; i++){
        if(i % 3 == 0 | i % 5 == 0) {
            sum += i;
        }
    }
    printf("%d\n", sum);
}
