#include <stdio.h>

/**
* main - a for loop that prints numbers 0-9
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int i = '0';

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
