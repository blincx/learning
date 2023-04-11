#include <stdio.h>


main()
{
    int c;

    c = getchar();

    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
    printf("Fine, you are ending this.");
}
