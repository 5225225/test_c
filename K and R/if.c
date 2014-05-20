#include <stdio.h>

main()
{
    int n = 1;
    int a = 2;
    int b = 4;
    int z = 0;
    if (n > 0) {
        if (a > b){
            z = a;
        }
        else {
            z = b;
        }
    }
    printf("%d\n", z);
}
