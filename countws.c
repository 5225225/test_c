#include <stdio.h>

main()
{
    int currchar;
    int i;
    int white = 0;
    int other = 0;
    int digit[10];
    for (i = 0; i < 10; i++)
        digit[i] = 0;
    while ((currchar = getchar()) != EOF) {
        switch (currchar) {
        case '0': case '1': case '2': case '3': case '4': 
        case '5': case '6': case '7': case '8': case '9': 
            digit[currchar-'0']++;
            break;
        case ' ':
        case '\n':
        case '\t':
            white++;
            break;
        default:
            other++;
            break;
        }
    }
    printf("digits: ");
    for (i = 0; i < 10; i++)
        printf(" %d", digit[i]);
    printf(", whitespace: %d, other: %d\n", white, other);
    return 0;
}
