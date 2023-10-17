#ifndef main_h
#define main_h
#include <string.h>
#include <stdio.h>


void print_alphabet(void)
{
	char l;
	
	for (l = 'a'; l<='z'; l++)
	{
		putchar(l);
	}
	
	putchar('\n');
}


#endif