#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int global;  // stored in the data segment, not stack or heap
char *s = "Hello Wordld!"; // stored in the text segment, read only, s itself is in the data segment

int main (int argc, char *argv[])
{
	int i; // stored on stack
	//int *p = malloc(sizeof (int));  // 4 bytes of memory from the heap
	static int st; // stored in the data segment, similar to global

	printf ("&i: %p\n", &i);
	//printf ("&p: %p\n", &p);
	//printf ("p %p\n", p);
	printf ("&st: %p\n", &st);
	printf ("&global: %p\n", &global);
	printf ("&s: %p\n", &s);
	printf ("s: %p\n", s);
	printf ("main: %p\n", main);
	printf ("&argc: %p\n", &argc);
	printf ("argv: %p\n", argv);
	printf ("&argv[0]: %p\n", &argv[0]);
	



	return 0;
}