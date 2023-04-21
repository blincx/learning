#include <stdio.h>

int main(void)
{
    int i = 10;
    int j = 20;

    const int *ptr = &i;

    printf("ptr: %d\n", *ptr);
    //*ptr = 100; // unlock my errors
    ptr = &j;
    printf("ptr: %d\n", *ptr);
    return 0;

}
