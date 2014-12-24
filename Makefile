CC = g++
CFLAGS = -std=c++11 -pedantic -g3 -Wall

BUILDDIR = build
TARGET = ${BUILDDIR}/noVowels

all: ${TARGET}

${TARGET}: noVowels.o
	${CC} ${CFLAGS} -o $@ $^

noVowels.o: noVowels.cpp
	${CC} ${CFLAGS} -c $^

clean:
	rm *.o
