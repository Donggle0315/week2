CC = gcc
target = result
objects = main.o Output.o String_Manipulation.o
$(target) : main.o Output.o String_Manipulation.o
	$(CC) -o $(target) $(objects)

main.o : main.c Header.h
	$(CC) -g -o main.o -c main.c
Output.o : Output.c Header.h
	$(CC) -g -o Output.o -c Output.c
String_Manipulation.o : String_Manipulation.c Header.h
	$(CC) -g -o String_Manipulation.o -c String_Manipulation.c

.PHONY : clean
clean :
	rm $(objects) $(target)
