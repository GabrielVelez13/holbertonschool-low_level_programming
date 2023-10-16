#include <stdio.h>

/**
* main - It gives random numbers and compares them to one another
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
