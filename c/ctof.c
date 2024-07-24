#include <stdio.h>

double convert_to_fahrenheit(double celsius);

int main()
{
    double c = 0;
    double start = 0;
    double step = 0;
    double end = 0;

    printf("Please enter a start temperature in celsius: ");
    scanf("%lf", &start);

    printf("Please enter a step vlaue: ");
    scanf("%lf", &step);

    printf("Please enter a end temperature in celsius: ");
    scanf("%lf", &end);

    //printf("Please enter a temperature in celsius! ");
    //scanf("%lf", &c);

    printf("     C        |         F     \n");
    printf("------------------------------\n");
    for (double i = start; i <= end; i += step)
        printf("C: %9.2lf  -->  F: %-9.2lf\n", i, convert_to_fahrenheit(i));

}

double convert_to_fahrenheit(double c)
{
    return (c * (9.0 / 5)) + 32;
}
