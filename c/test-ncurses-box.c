#include <ncurses.h>

int main()
{
    initscr();
    noecho();
    curs_set(FALSE);

    int sx, sy, w, h;

    char msg[] = "hi, this is your git client, how may i help you!";

    h = 20;
    w = 40;
    printw("%d\n", LINES);
    printw("%d\n", COLS);
    sy = (LINES - h) / 2;
    sx = (COLS - h) / 2;

    mvhline(sy, sx, '=', w);
    mvhline(sy + h, sx, '=', w);

    mvvline(sy, sx, '#', w);
    mvvline(sy, sx + h, '#', w);

    mvaddch(sy, sx, '#');
    mvaddch(sy, sx + w, '#');
    mvaddch(sy + h, sx, '#');
    mvaddch(sy + h, sx + w, '#');

    refresh();
    getch();
    endwin();

    return 0;

}






