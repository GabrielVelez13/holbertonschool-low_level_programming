#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* _atoi - changes string to numbers.
* @s: parameters for the function.
* Return: dest
**/

int _atoi(char *s)
{
	int i, res = 0;

	if (s == 0)
	{
		return (0);
	}

	for (i = 0; s[i] != '\0'; ++i)
	{
		res = res * 10 + s[i] - '0';
	}
	return (res);
}
