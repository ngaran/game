CC=gcc
CFLAGS=
LDFLAGS=-lncurses
SRC=src/game.c

game: $(SRC)
	$(CC) $(CFLAGS) $(SRC) -c
	$(CC) $(LDFLAGS) *.o -o game

clean:
	rm -f *.o

.PHONY: clean

