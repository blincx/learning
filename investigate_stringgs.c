#include <stdio.h>

void strcpy2(char *s, char *t);


int main()
{
    char amessage[] = "now is the time";
    char *pmessage = "now is the time";

    char *t;
    printf("eei\n");
    strcpy2(pmessage, t);
    printf("eeeie\n");
    printf("%s",t);


}

void strcpy2(char *s, char *t)
{
    while (*s++ = *t++)
        printf("i");
        printf("%s",*s);
        ;
}
