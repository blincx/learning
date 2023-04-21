#include <stdio.h>
#include <stdlib.h>

int main() {
    char *str = malloc(4);
    str[0] = 'h';
    str[1] = 'e';
    str[2] = 'y';
    str[3] = '\0';

    printf("%s",str);

    free(str);

}
