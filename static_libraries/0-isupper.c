#include <stdio.h>
#include "main.h"

/**
* _isupper - checks if a letter is uppercase or not.
*
* @c: is the input parameter of function.
*
* Return: 1 if uppercase, 0 if not.
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
