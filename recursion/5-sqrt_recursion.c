#include "main.h"

/**
* _sqrt_recursion - find the natural square root of n.
* guessing - guessing by checking numbers 1 by 1 until finding the square root.
* @n: parameter of the function.
* @guess: parameter of the function.
* Return: ends the recursion.
**/

int guessing(int n, int guess)
{
	if (guess * guess > n)
	{
		return (-1);
	}
	if (guess * guess == n)
	{
		return (guess);
	}
	return (guessing(n, guess + 1));
}

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (guessing(n, 0));
}
