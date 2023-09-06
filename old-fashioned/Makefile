gameOfLife-procedural.o:
	g++ src/gameOfLife-procedural.cpp -o gameOfLife-procedural.o

gameOfLife-oop.o:
	g++ src/gameOfLife-oop.cpp -o gameOfLife-oop.o

# .PHONY denotes that the following rules do not create a file; instead, they just executes commands.
.PHONY: clean all

# delete any executeables with file extension ".o"
clean:
	rm -f *.o

# compile both versions of the game of life
# the rule "all" depends on the files gameOfLife-procedural.o and gameOfLife-oop.o already existingmake
all: gameOfLife-procedural.o gameOfLife-oop.o