all: server first second

server: server.c utils.c
	gcc server.c utils.c -o server -lpthread

first: first.c utils.c
	gcc first.c utils.c -o first

second: second.c utils.c
	gcc second.c utils.c -o second

clean:
	rm server first second
