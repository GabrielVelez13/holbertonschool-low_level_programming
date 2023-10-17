#include <stdio.h>
#include "main.h"

/**
* print_last_digit - gives the last digit of a number.
*
* @n: is the input parameter of function.
*
* Return: 1 if lowercase, 0 if not.
*/

int print_last_digit(int n)
{
	int x;

	x = n % 10;

	if (x < 0)
	{
		x = abs(x);
	}

	_putchar(x + '0');
	return (x);
}
