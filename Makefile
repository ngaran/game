CC=gcc
CFLAGS=
LDFLAGS=-lncurses
SRC=src/game.c src/item.h src/map.h src/map.c src/player.h

game: $(SRC)
	$(CC) $(CFLAGS) $(SRC) -c
	$(CC) $(LDFLAGS) *.o -o game

clean:
	rm -f *.o src/*.gch

.PHONY: clean

