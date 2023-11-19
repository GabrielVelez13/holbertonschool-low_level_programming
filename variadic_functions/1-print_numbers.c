#include "variadic_functions.h"

/**
* print_numbers - print them nums
* @separator: the separator of the nums
* @n: number of parameters
* @...: all the numbers
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0, num = 0;
	va_list args;

	va_start(args, n);

	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			num = va_arg(args, const unsigned int);
			if (i != n)
			{
				printf("%d%s", num, separator);
				
			}
		}
		printf("\n");
	}

	va_end(args);
}
