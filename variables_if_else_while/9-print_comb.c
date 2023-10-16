#include <stdio.h>

/**
* main - a for loop that prints numbers 0-9 with commas and a $
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);

		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar('$');
		}
	}

	return (0);
}
