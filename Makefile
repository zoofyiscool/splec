EXECUTABLE = splec
CCFLAGS = -O2 -march=native
SRCDIR = src
BUILDIR = build
BINDIR = /usr/bin
SOURCE = main.c
CC = gcc

all:
	$(CC) $(CCFLAGS) -o $(BUILDIR)/$(EXECUTABLE) $(SRCDIR)/$(SOURCE) -lm

install:
	cp $(BUILDIR)/$(EXECUTABLE) $(BINDIR)/$(EXECUTABLE)
