#include "variadic_functions.h"

/**
* print_strings - print them strings
* @separator: the separator of the nums
* @n: number of parameters
* @...: all the numbers
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *str;
	va_list args;

	va_start(args, n);

	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			str = va_arg(args, char*);
			if (str != NULL)
			{
				(i < n - 1) ? printf("%s%s", str, separator) : printf("%s", str);
			}
			else
			{
				printf("(nil)");
			}
		}
		printf("\n");
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			str = va_arg(args, char*);
			printf("%s", str);
		}
		printf("\n");
	}

	va_end(args);
}
