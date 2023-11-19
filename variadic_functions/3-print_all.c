#include "variadic_functions.h"

/**
* print_all - prints in any format
* @format: list of arguments
*/
void print_all(const char * const format, ...)
{
	int i = 0;
	char *sep = "", *str;
	va_list args;

	va_start(args, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					if (!str)
					{
						str = "(nil)";
					}
					printf("%s%s", sep, str);
					break;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");

	va_end(args);
}
