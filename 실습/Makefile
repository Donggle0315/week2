CC=gcc
target=StarWars
objects=main.o output.o page_sum.o

$(target) : $(objects)
	$(CC) -o $(target) $(objects)

$(objects) : Header.h

.PHONY : clean
clean :
	rm $(target) $(objects)
