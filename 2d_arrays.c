#include <stdio.h>


int main()
{
    static char daytab[2][3] = {
        {0,1,3},
        {0,1,2}
    };

    int c = 0;
    for (int i=0; i<3; i++) {
        int day, day2;
        day = daytab[c][i];
        printf("%d\n",day);
        day2 = daytab[1][i];
        printf("%d\n",day2);
    }

}
