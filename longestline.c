#include <stdio.h>
#include <string.h>
#define MAXLINE 100

int agetline(char line[], int maxline);
void copy(char to[], char from[]);

/* print longeset input line */
main()
{
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];
    int i = 0;
    char c;

    while (c != EOF && c != '\n')
        c = getchar();
        printf("i=%d\n",i);
        printf("c=%d\n",c);
        line[i] = c;
        ++i;
    line[i] = '\0';
    printf("%s",line);
    printf("i=%d",i);
    //for (char e=0; e<=i; e++)
        //printf("c=%c",line[e]);

}
