#include <stdio.h>

main()
{
    char str[] = "hello world";
    char *s = &str[0];
    int i;
    for(i=0; i<11; i++) {
    printf("%c", *(s+i)+32);
    }
    printf("\n");
}
