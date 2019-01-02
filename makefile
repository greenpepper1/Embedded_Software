CFLAGS = -c -Wall -Iinclude

dna: member_generator.c pop_generator.c main.c
	 gcc -o dna member_generator.c pop_generator.c main.c

clean:
	 rm dna
