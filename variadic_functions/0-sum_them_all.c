#include "variadic_functions.h"

/**
* sum_them_all - sums all arguments
* @n: number of parameters
* @...: all the numbers
* Return: the sum
*/
int sum_them_all(const unsigned int n, ...)
{
	int i = 0, sum = 0;
	va_list args;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, const unsigned int);
	}

	va_end(args);

	return (sum);
}
