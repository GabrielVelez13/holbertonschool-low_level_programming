#include <stdio.h>
#include "main.h"

/**
* _isdigit - checks if a int is a digit or not.
*
* @c: is the input parameter of function.
*
* Return: 1 if digit, 0 if not.
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
