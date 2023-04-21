#include <stdio.h>

int init(void)
{
    return 50;
}

int main()
{
    static int i = init();
    printf(" value of i = %d\n",i);
    getchar();
    return 0;
    
}
