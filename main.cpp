#include "curses.h"
#include "unistd.h"
using namespace std;

int main() {
    initscr();
    addstr("hello world");

    WINDOW *win = newwin(9, 29, 5, 5);
    box(win, '*', '*');
    refresh();
    wrefresh(win);
    wmove(win, 2, 0);

    waddstr(win, "hello again");
    wrefresh(win);
    sleep(5);
    endwin();
    return 0;
}
