OBJS = interface.o cdr.o hashttable.o maxheap.o
SOURCE = interface.cpp cdr.cpp hashttable.cpp maxheap.cpp
HEADER = cdr.h hashttable.h maxheap.h

 OUT = werhauz
  CC = g++
FLAGS = -c -g
DELETE = $(OBJS) $(OUT)

all: $(OBJS)
	$(CC) $(OBJS) -o $(OUT)


$(OBJS): $(SOURCE) $(HEADER)
	$(CC) $(FLAGS) $(SOURCE)

deb:
	gdb $(OUT)

val:
	valgrind --leak-check=yes ./$(OUT)

clean:
	rm -f $(DELETE)