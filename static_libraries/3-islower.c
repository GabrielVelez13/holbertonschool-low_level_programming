#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
* _islower - checks if a word is lowercase or not.
*
* @c: is the input parameter of function.
*
* Return: 1 if lowercase, 0 if not.
*/

int _islower(int c)
{
	if (islower(c) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
