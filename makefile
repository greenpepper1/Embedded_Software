CFLAGS = -c -Wall -Iinclude

hello: hello.c main.c
	 gcc -o hello hello.c main.c

clean:
	 rm hello
