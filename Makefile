EXECUTABLE = program
CCFLAGS = -O2 -march=native -lm
SRCDIR = src
BUILDIR = build
SOURCE = main.c
CC = gcc

all:
	$(CC) $(CCFLAGS) -o $(BUILDIR)/$(EXECUTABLE) $(SRCDIR)/$(SOURCE)
