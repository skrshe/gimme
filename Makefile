CC=gcc
FLAGS=-Wall -Wextra -ggdb

gm: main.c
	$(CC) $? $(FLAGS) -o $@

clean: gm*
	rm -rf $?

run: gm
	./$?

use: gm
	./$? -h
