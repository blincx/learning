#include <stdio.h>

main() {
    
    int x = 4;
    int *xP = &x;
    printf("%d\n",xP);
    printf("%p\n",xP);
    int y = *xP; // dereference
    printf("%d\n",y);

}
