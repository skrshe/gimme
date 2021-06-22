CC=gcc
FLAGS=-Wall -Wextra -ggdb

build/gm: build src/main.c
	$(CC) src/main.c $(FLAGS) -o $@

start:
	mkdir -p build

clean: build/*
	rm -rf $?

run: build/gm
	$?

use: build/gm
	$? -h
