#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>



int main(void)
{
	void *p;
	void *f;

	write(1, "BEFORE MALLOC #0\n", 17);
	p = malloc(1024);
	write(1, "AFTER MALLOC #0\n", 16);
	printf("%p\n", p);
	sizeof(p);

	write(1, "BEFORE MALLOC #1\n", 17);
	f = malloc(512);
	write(1, "AFTER MALLOC #1\n", 16);
	printf("%p\n", f);

	write(1, "BEFORE MALLOC #2\n", 17);
	f = malloc(512);
	write(1, "AFTER MALLOC #2\n", 16);
	printf("%p\n", f);

	write(1, "BEFORE MALLOC #3\n", 17);
	f = malloc(512);
	write(1, "AFTER MALLOC #3\n", 16);
	printf("%p\n", f);

	write(1, "BEFORE MALLOC #4\n", 17);
	f = malloc(512);
	write(1, "AFTER MALLOC #4\n", 16);
	printf("%p\n", f);

	write(1, "BEFORE MALLOC #5\n", 17);
	f = malloc(512);
	write(1, "AFTER MALLOC #5\n", 16);
	printf("%p\n", f);

	write(1, "BEFORE MALLOC #6\n", 17);
	f = malloc(512);
	write(1, "AFTER MALLOC #6\n", 16);
	printf("%p\n", f);
	
	
	
	
	getchar();
	return (EXIT_SUCCESS);
}