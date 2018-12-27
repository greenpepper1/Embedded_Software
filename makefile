CFLAGS = -c -Wall -Iinclude

dna: pop_generator.c main.c
	 gcc -o dna pop_generator.c main.c

clean:
	 rm dna
