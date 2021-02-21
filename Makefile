# gimme - simple terminal
# See LICENSE file for copyright and license details.

SRC = src/main.c
# OBJ = $(SRC:.c=.o)
CC = gcc
FLAGS = -ggdb -Wall -Wextra
LINKS =
ALLFLAGS = $(FLAGS) $(LINKS)
PREFIX = /usr/local/

all: options gimme

options:
	@echo gimme build options:
	@echo "CFLAGS  = $(FLAGS)"
	@echo "LDFLAGS = $(LINKS)"
	@echo "CC      = $(CC)"

gimme: dist
	$(CC) $(SRC) $(ALLFLAGS) -o build/gm

# markdocs: gimme
	# make man page from wiki markdown
	# mkdir -p build/doc/
	# pandoc wiki/* -o -f roff build/doc/gimme.1

clean:
	rm -rf build/*

dist: clean ; [ ! -d "build" ] && mkdir -p build
	# tar -cf - gimme-$(VERSION) | gzip > gimme-$(VERSION).tar.gz
	# rm -rf gimme-$(VERSION)

install: all  gimme ; # markdocs
	mkdir -p $(DESTDIR)$(PREFIX)/bin
	cp -f build/gm $(DESTDIR)$(PREFIX)/bin
	chmod 755 $(DESTDIR)$(PREFIX)/bin/gm
	# mkdir -p $(DESTDIR)$(MANPREFIX)/man1
	# sed "s/VERSION/$(VERSION)/g" < gimme.1 > $(DESTDIR)$(MANPREFIX)/man1/gimme.1
	# chmod 644 $(DESTDIR)$(MANPREFIX)/man1/gimme.1

uninstall:
	rm -f $(DESTDIR)$(PREFIX)/bin/gm
	# rm -f $(DESTDIR)$(MANPREFIX)/man1/gimme.1

.PHONY: all options clean dist install uninstall
