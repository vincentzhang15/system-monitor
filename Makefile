CC = gcc
CFLAGS = -std=c99 -Wall -Werror -g

SOURCES = SystemStats.c stats_functions.c
HEADERS = SystemStats.h
OBJECTS = $(SOURCES:.c=.o)
EXECUTABLE = SystemStats

## no args:  Defaults to compiling and linking files to create executable.
all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS) $(HEADERS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $@

## %.o:  Creates the selected object file where % is replaced with the filename.
%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

## clean :  Removes generated files.
.PHONY: clean
clean:
	rm -f *.o
.PHONY: help
help: Makefile
	@sed -n 's/^##//p' $<
