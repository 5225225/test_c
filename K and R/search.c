#include <stdio.h>
#include <string.h>
#define MAXLINE 1000

int getlinex(char line[], int max);
int strindex(char source[], char searchfor[]);


main(int argc, char *argv[])
{
    char line[MAXLINE];
    char pattern[1024];
    strcpy(pattern, argv[1]);
    printf("searching for: %s\n", pattern);
    int found = 0;
    int i = 0;
    int len = strlen(pattern);
    while (getlinex(line, MAXLINE) > 0)
        {int index = strindex(line, pattern);
        if (index >= 0) {
            int llen = strlen(line);
            for(i=0; i < llen; i++){
                if (i == index) 
                    printf("\x1b[7m");
                else if (i == index + len)
                    printf("\x1b[0m");
                printf("%c", line[i]);
            }
            found++;
        }
        }
    return found;
}

int getlinex(char s[], int lim)
{
    int c, i;

    i = 0;
    while (--lim > 0 && (c=getchar()) != EOF && c != '\n')
        s[i++] = c;
    if (c == '\n')
        s[i++] = c;
    s[i] = '\0';
    return i;
}

int strindex(char s[], char t[])
{
    int i, j, k;

    for (i = 0; s[i] != '\0'; i++) {
        for(j=i, k=0; t[k]!='\0' && s[j]==t[k]; j++, k++)
            ;
        if (k > 0 && t[k] == '\0')
            return i;
    }
    return -1;
}
