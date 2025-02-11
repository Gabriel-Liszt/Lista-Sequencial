CC = gcc
CFLAGS = -Wall -g
OBJ = lista.o main.o
EXEC = programa

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) -o $(EXEC) $(OBJ)

lista.o: lista.c lista.h
	$(CC) $(CFLAGS) -c lista.c

main.o: main.c lista.h
	$(CC) $(CFLAGS) -c main.c

clean:
	rm -f *.o $(EXEC)
