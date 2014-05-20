#include <stdio.h>
#include <math.h>

int prime(int x) {
    int stopnum = sqrt(x);
    for (int div = 2; div < stopnum + 1 ; div++) {
        if (x % div == 0) {
            return(0);
        }
    }
    return(1);
}

int main() {
    int tofind = 10001;
    printf("Going to find %d prime numbers\n", tofind);
    int primecount = 0;
    for(int i=0;;i++){
        if(prime(i)) {
            primecount++;
        }
        if(primecount == tofind) {
            printf("%d\n", i);
            return(0);
        }
    }
}
