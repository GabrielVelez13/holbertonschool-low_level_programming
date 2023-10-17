#include <stdio.h>
#include "main.h"

/**
* print_sign - checks if a number is postive or negative
*
* @n: is the input parameter of function.
*
* Return: 1 if lowercase, 0 if not.
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
