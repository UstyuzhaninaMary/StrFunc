CC = gcc

build:
	$(CC) -o onegin.out main.c test.c strFunc.c

run: build
	./onegin.out