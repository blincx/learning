#include <stdio.h>
#include <string.h>


int func ( int (*f)(int) );
int print (int x);

int main()
{
    func(print); 
    int *ab = &func;
    printf("ii\n");

}

int func ( int (*f)(int) ) {
    int cc = f(22);
    printf("func: %d\n", cc);
    return 3;

}

int print ( int x ) { 
    printf("print: %d\n",x);
    return x;
}
