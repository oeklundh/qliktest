FLAGS=-Wall -fPIC
CC=gcc
LINKER=$(CC) -o
INC=-I../include
SRCS=hello.c
OBJECTS=$(SRCS:.c=.o)
TARGET=qtest
.PHONY: clean
TESTH=test/test_hello_world.c
TESTD=test/test_dimension.c
LIB=libq.dylib

all: testh testd

%.o: %.c
	$(CC) $(INC) $(FLAGS) -c -o $@ $<
libq.dylib: hello.o
	$(CC) -dynamiclib $^ -o libq.dylib
testh: ../test/test_hello_world.o $(LIB)
	$(LINKER) $@ $(LFLAGS) $^
testd: ../test/test_dimension.o $(LIB)
	$(LINKER) $@ $(LFLAGS) $^	
clean:
	rm -rf *.o ../test/*.o *.dylib testh testd
