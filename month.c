#include <stdio.h>

char *month_name(int n);


int main() {

    char c = getchar();
    printf("c is %d\n",c);
    int dd = 0;
    if (c==49){
        printf("c is 1\n");
        dd = 1;}
    else if (c==50){
        printf("c is 2\n");
        dd = 2;}
    else if (c==51){
        printf("c is 3\n");
        dd = 3;}
    else if (c==52){
        dd = 4;}
    else if (c==53){
        dd = 5;};
    printf("what is goging on ?\n");
    char *b = month_name(dd);
    printf("%s",b);
}

char *month_name (int n) 
{
    printf("%d\n",n);
    static char *name[] = {
        "Illegal month",
        "January", "February", "march",
            "April", "May", "June",
        "July", "August", "Sep",
        "Oct", "Nov", "December"};

    return (n < 1 || n > 12) ? name[0] : name[n];
    }

