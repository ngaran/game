#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "map.h"

map_t *init_empty_map()
{
	map_t *map = malloc(sizeof(map_t)+8*8);

	map->w = 8;
	map->h = 8;
	map->px = 0;
	map->py = 0;
	map->data = malloc(map->w*map->h);
	memset(map->data, ' ', map->w*map->h);

	return map;
}

map_t *read_map(char *filename)
{
	FILE *fp = fopen(filename, "rb");
	if(!fp) return NULL;

	map_t *map = malloc(sizeof(map_t));

	fread(map, 1, sizeof(map), fp);

	fread(map->data, 1, map->w*map->h, fp);

	fclose(fp);
}

int write_map(map_t *map, char *filename)
{
	FILE *fp = fopen(filename, "ab");
	if(!fp) return errno;

	fwrite(map, 1, sizeof(map), fp);

	fwrite(map->data, 1, map->w*map->h, fp);

	fclose(fp);

	return 0;
}

