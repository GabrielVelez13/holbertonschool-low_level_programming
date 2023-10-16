#include <stdio.h>

/**
* main - a for loop that prints numbers 0-9
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char letter;

	for (letter = '0'; letter <= '9'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
