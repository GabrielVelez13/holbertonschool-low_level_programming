#include "main.h"

/**
* factorial - prints the factorial of a number.
* @n: parameter of the function.
* Return: ends the recursion.
**/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
