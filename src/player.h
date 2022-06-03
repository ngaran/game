#ifndef _PLAYER_H
#define _PLAYER_H

#include "item.h"

typedef struct
{
	char *name;
	int lvl, atk, hp, invc;
	item_t *inv;
}
player_t;

#endif

