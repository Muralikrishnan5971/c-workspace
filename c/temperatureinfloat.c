#include <stdio.h>

/* print Fahrenheit-celsius Table
 * for fahr = 0, 20, 40......300
 * C=(5/9)(F-32)*/


int main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while(fahr <= upper)
    {
        celsius = ( 5.0 / 9.0) *  (fahr - 32.0 );
        printf("%3.0f\t%6.1f\t\n", fahr, celsius);
        fahr = fahr + step;
    }

}
