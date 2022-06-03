#ifndef _MAP_H
#define _MAP_H

typedef struct
{
	short w, h, px, py;
	char *data;
}
map_t;

map_t *init_empty_map();
map_t *read_map(char *filename);
int    write_map(map_t *map, char *filename);

#endif

