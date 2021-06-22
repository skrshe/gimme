gimme: start
	gcc src/main.c -Wall -Wextra -ggdb -o build/gm

start:
	mkdir -p build

clean:
	rm -rf build/*

run: gimme
	build/gm
