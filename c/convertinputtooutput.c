#include <stdio.h>
#include <stdbool.h>

int main()
{
    int c;
    bool value;

    while(( value = (( c = getchar()) != EOF) ))
    {
        printf("%d", value);
        putchar(c);
    }

}
