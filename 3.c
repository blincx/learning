#include <stdio.h>

/* print Fahrenheit-Celsius table
 * for fahr = 0, 20, ..., 30 */

main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0; /* lower limit of temp table*/
    upper = 300;
    step = 20; /* step size*/
    fahr = lower;

    while (fahr < 20) {
        celsius = 5 * (fahr-32) / 9;
        scanf("%d%d",fahr,celsius);
        printf("%d\t%d\n", fahr,celsius);
        fahr = fahr+step;

    }
}

