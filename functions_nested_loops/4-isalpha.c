#include <stdio.h>
#include "main.h"

/**
* _isalpha - checks if a word is lowercase or not.
*
* @c: is the input parameter of function.
*
* Return: 1 if lowercase, 0 if not.
*/

int _isalpha(int c)
{
	if (isalpha(c) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
