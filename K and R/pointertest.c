#include <stdio.h>

void addfive(int x)
{
    x=+5;
}

void pointeraddfive(int *px)
{
    *px = *px + 5;
}

main()
{
    int x = 4;
    int *x1 = &x;
    int *x2 = &x; //Both of these point to X.

    ++*x1;
    printf("%i\n", *x2); //Should print 5
    addfive(*x1);
    printf("%i\n", *x2); //Should print 10, but doesn't.
    pointeraddfive(&x);
    printf("%i\n", x); //Should print 10
}

