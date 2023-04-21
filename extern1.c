#include <stdio.h>


extern int var = 10;
//var = 0;

int fun()
{
    var = 13;
    printf("%d\n",var);

}

int main()
{
    var = 10;
    printf("%d\n",var);
    fun();
    return 0;

}
