#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// time.h is only used for the RNG seed. This is not meant to be secure random
// numbers, just somewhat random 

int roll() {
    return rand() % 6;
}

int main() {
    printf("Rolls\t1s\t2s\t3s\t4s\t5s\t6s\n");
    for(int i=0; i<7*8; i++) {
        // The 7 is for how many fields there are ("rolls" and 1-6, and the
        // 8 is the width of tabs on the terminal. This is usually 8.
        printf("=");
    }
    printf("\n");
    srand(time(NULL));
    for(int t=10; t<=1000000; t=t*10) {
        // Arrays don't start off at 0, you have to manually initalise them.
        // This applies to all variables.
        int dist[6];
        for(int i=0; i<6; i++) {
            dist[i] = 0;
        }
        for(int i=0; i<t; i++) {
            dist[roll()]++;
        }
        printf("%d\t", t);
        for(int i=0; i<6; i++) {
            printf("%.2f%%\t", ((float)dist[i] / t) * 100);
        }
        printf("\n");
    }
}
