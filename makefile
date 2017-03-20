OBJS = interface.o cdr.o types.o
SOURCE = interface.cpp cdr.cpp types.cpp
HEADER = cdr.h types.h

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