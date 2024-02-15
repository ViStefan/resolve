main: main.o resolve.o
	cc -g -o main main.o resolve.o

main.o: main.c resolve.h
	cc -g -c main.c

resolve.o: resolve.c resolve.h
	cc -g -c resolve.c

clear:
	rm *.o
