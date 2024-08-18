/* Prgramm C POC
 * Written by Emaky
 */
#include <stdio.h>
#include <math.h>

#define PI 3.1416
#define MAX 180

int mul(int a, int b);    /* DECLARATION */

int main()
{
    printf("Hello world!!\n");
    printf("this is the second line!!\n");
    printf("*************************\n");

    int num;
    float amt;
    num = 100;
    amt = 54.543 + 453.343;
    printf("%d\n", num);
    printf("%5.3f\n", amt);
    printf("*************************\n");

    int a, b, c;
    a = 5;
    b = 10;
    c = mul(a, b);
    printf( "Multiplication of %d and %d is %d\n", a, b, c);
    printf("*************************\n");

    int angle;
    float x, y;
    angle = 0;
    printf("            ANGLE     Cos(angle)\n\n");
    while(angle <= MAX)
    {
        x = (PI/MAX)*angle;
        y = cos(x);
        printf("%15d %13.4f\n", angle, y);
        angle = angle + 10;
    }
    printf("*************************\n");


}

int mul(int x, int y)
{
    int p;
    p = x * y;
    return p;
}

