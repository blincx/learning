#include <stdio.h>

int fun()
{
    static int count = 0;
    // try removing the static keyword and see
    // what happens!
    count++;
    return count;
}

int main()
{
    printf("%d\n", fun());
    printf("%d\n", fun());
    return 0;
}
