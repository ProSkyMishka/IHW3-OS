all: server first second observer

server: server.c utils.c utils.h
	gcc server.c utils.c -o server -lpthread

first: first.c utils.c utils.h
	gcc first.c utils.c -o first

second: second.c utils.c utils.h
	gcc second.c utils.c -o second

observer: observer.c utils.c utils.h
	gcc observer.c utils.c -o observer

clean:
	rm server first second observer
