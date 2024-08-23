#include <stdio.h>
#include <ncurses.h>
#include <stdlib.h>

int main() 
{
    initscr();
    int h, w, y, x;
    h = 10;
    w = 20;
    y = x = 10;

    WINDOW * win = newwin(h, w, y, x);
    refresh();

    box(win, 0x2551, 0x2550);
    mvwprintw(win, 1, 1, "this is my box");
    wrefresh(win);

    int c = getch();

    endwin();




    return 0;

}

