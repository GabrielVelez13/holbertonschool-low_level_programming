#include "main.h"

/**
* leet - changes words to letters.
* @s: parameters for the function.
* Return: s
**/


char *leet(char *s)
{
	int i;
	char letters[5] = {'A', 'E', 'L', 'O', 'T'};
	int numbers[5] = {4, 3, 1, 0, 7};

	while (*s)
	{
		for (i = 0; i < 5; i++)
		{
			if (*s == letters[i] || *s == letters[i] + 32)
			{
				*s = numbers[i] + '0';
			}
		}
		s++;
	}
	return (s);
}
