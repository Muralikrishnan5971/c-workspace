#include <stdio.h>

/* print Fahrenheit-celsius Table
 * for fahr = 0, 20, 40......300
 * C=(5/9)(F-32)*/


int main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while(fahr <= upper)
    {
        /* The reason for multiplying by 5 and dividing by 9 instead of just multiplying by 5/9 is that in C, as in many other languages, integer division truncates: any fractional part is discarded.Since 5 and 9 are integers.
         * 5/9 would be truncated to zero and so all the Celsius temperatures would be reported as zero. */
        celsius = 5 * (fahr - 32 ) / 9;
        printf("%3d\t%6d\t\n", fahr, celsius);
        fahr = fahr + step;
    }

}
