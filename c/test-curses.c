#include <ncurses.h>

int main()
{
    int ch;

    initscr();
    raw();
    keypad(stdscr, TRUE);
    noecho();

    printw("Type any character to see it in bold \n");
    ch = getch();

    if( ch == KEY_F(1)) printw("F1 key is pressed");
    else
    {
        printw("The pressed character is ");
        attron(A_BOLD);
        printw("%c", ch);
        attroff(A_BOLD);
    }
    refresh();
    getch();
    endwin();

    return 0;

}
