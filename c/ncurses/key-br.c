#include<ncurses.h>


int main()
{
    int ch;

    initscr();                  /* starts curses mode */
    raw();                      /* disabling line buffering */
    keypad(stdscr, true);       /* get f1, f2... */
    noecho();                   /* don't echo() while we do getch() */


    printw("Type any character to see it in bold \n");
    ch = getch();

    if(ch == KEY_f(1))
        printw("F1 is pressed!!\n");
    else
        printw("The pressed key is: \n")



















    return 0;
}
