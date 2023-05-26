CC := gcc
#CFLAGS := 
DEST := ./build/

all: binary_search.c
	mkdir -p build
	$(CC) binary_search.c -lcs50 -o $(DEST)/binary_search 