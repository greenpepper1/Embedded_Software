CFLAGS = -c -Wall -Iinclude

hello: hello.c
	 gcc -o hello hello.c

clean:
	 rm hello
