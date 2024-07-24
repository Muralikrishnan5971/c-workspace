#include <stdio.h>

int calculateRectangle(int l, int b);

int main()
{
    int l = 30;
    int b = 40;

    int area = calculateRectangle(l, b);

    printf("The area of the rectangle: %d", area);

}

int calculateRectangle(int l, int b)
{
    return l * b;
}
