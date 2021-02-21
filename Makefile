# gimme - simple terminal
# See LICENSE file for copyright and license details.
.POSIX:

include config.mk

SRC = src/main.c
OBJ = $(SRC:.c=.o)
CC = gcc
FLAGS = -ggdb -wall -wextra
LINKS = -lstd
ALLFLAGS = $(FLAGS) $(LINKS)

all: options gimme

options:
	@echo gimme build options:
	@echo "CFLAGS  = $(FLAGS)"
	@echo "LDFLAGS = $(LINKS)"
	@echo "CC      = $(CC)"

gimme: $(SRC)
	[ ! -f "build" ] && mkdir build
	$(CC) $(SRC) -o build/gm

markdocs:
	make man page from wiki markdown

clean:
	rm -f build/{gimme,$(OBJ)} gimme-$(VERSION).tar.gz

dist: clean
	mkdir -p gimme-$(VERSION)
	cp -R FAQ LEGACY TODO LICENSE Makefile README config.mk\
		config.def.h gimme.info gimme.1 arg.h gimme.h $(SRC)\
	 gimme-$(VERSION)
	tar -cf - gimme-$(VERSION) | gzip > gimme-$(VERSION).tar.gz
	rm -rf gimme-$(VERSION)

install: all  gimme # markdocs
	mkdir -p $(DESTDIR)$(PREFIX)/bin
	cp -f gm $(DESTDIR)$(PREFIX)/bin
	chmod 755 $(DESTDIR)$(PREFIX)/bin/gm
	# mkdir -p $(DESTDIR)$(MANPREFIX)/man1
	# sed "s/VERSION/$(VERSION)/g" < gimme.1 > $(DESTDIR)$(MANPREFIX)/man1/gimme.1
	# chmod 644 $(DESTDIR)$(MANPREFIX)/man1/gimme.1

uninstall:
	rm -f $(DESTDIR)$(PREFIX)/bin/gm
	# rm -f $(DESTDIR)$(MANPREFIX)/man1/gimme.1

.PHONY: all options clean dist install uninstall
