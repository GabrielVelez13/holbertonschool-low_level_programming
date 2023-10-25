#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* rev_string - Reverse a string.
* @s: parameters for the function.
**/

void rev_string(char *s)
{
	int i = 0;
	char c;
	int j = strlen(s) - 1;

	while (i < j)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
		i++;
		j--;
	}
}
