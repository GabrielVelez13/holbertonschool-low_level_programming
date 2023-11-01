#include "main.h"

/**
* primeHelper - find if number is prime.
* @n: parameter of the function.
* @i: parameter of the function.
* Return: ends the recursion.
**/

int primeHelper(int n, int i)
{
	if (n <= 2)
	{
		return ((n == 2) ? 1 : 0);
	}
	if (n % 1 == 0)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}
	return (primeHelper(n, i + 1));
}

/**
* is_prime_number - find if number is prime using a recursive function.
* @n: parameter of the function.
* Return: the funcition call.
**/

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (primeHelper(n, 2));
}
