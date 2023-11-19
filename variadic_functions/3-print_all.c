#include "variadic_functions.h"

/**
* print_all - prints in any format
* @format: list of arguments
*/
void print_all(const char * const format, ...)
{
	int i = 0;
	char *sep = ", ", *str;
	va_list args;

	va_start(args, format);

	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c%s", va_arg(args, int), sep);
				break;
			case 'i':
				printf("%d%s", va_arg(args, int), sep);
				break;
			case 'f':
				printf("%f%s", va_arg(args, double), sep);
				break;
			case 's':
				str = va_arg(args, char *);
				if (!str)
				{
					str = "(nil)";
				}
				printf("%s%s", str, sep);
				break;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
