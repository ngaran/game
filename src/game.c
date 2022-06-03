#include <ncurses.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include "map.h"

#define NAME_SIZE 255
char *name;

const char *name_p = "what will you call yourself";
// const char *hello = "hello %s\n"; unused

int my, mx;

int main(int argc, char **argv)
{
	name = malloc(NAME_SIZE);

	initscr();

	getmaxyx(stdscr, my, mx);

	mvprintw(4, (int)mx/2-strlen(name_p)/2, "%s\n", name_p);

	mvgetstr(5, (int)mx/2, name);

	curs_set(0);

	/*
	 *  clear();
	 *
	 *  mvprintw(4, (int)mx/2, hello, name);
	 *
	 *  unused
	 */

	getch();

	/*
	 *  map_t *empty = init_empty_map();
	 *
 	 *  write_map(empty, "src/map/debug.map");
	 *
	 *  thats how we make debug.map
	 */

	endwin();

	free(name);

	return 0;
}

