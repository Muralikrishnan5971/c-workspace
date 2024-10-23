#include <ncurses.h>


int main()
{
    initscr();
    cbreak();
    noecho();
    clear();


    int h = 10, w = 40, x = 10, y = 5;
    WINDOW *test_win = newwin(h, w, y, x);

    mvwprintw(test_win, 1, 1, "Hello, this is a test window!");
    mvwprintw(test_win, 2, 1, "Press any key to exit.");


    refresh();

    getch();


    return 0;
}
