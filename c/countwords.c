#include <stdio.h>

# define IN 0 // inside a word
# define OUT 1 // outside a word

int main()
{
    int c, nc, nw, nl, state;

    state = OUT;
    nc = nw = nl = 0;

    while ( ( c = getchar() != EOF) ) {
        ++nc;
        if ( c == '\n' )
            ++nl;
        if ( c == ' ' || c == '\n' || c == '\t' )
            state = OUT;
        else if ( state == OUT ) {
            state = IN;
            ++nw;
        }
    }

    printf("%d %d %d\n", nc, nw, nl);
    return 0;

}
