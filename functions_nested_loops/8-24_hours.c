#include <stdio.h>
#include "main.h"

/**
* jack_bauer - Prints the 24 hours.
*
* Return: 1 if lowercase, 0 if not.
*/

void jack_bauer(void)
{
	int daysDone = 0;
	int minutes = 0;
	int hours = 0;

	while (daysDone != 1)
	{
		printf("%02d:00\n", hours);
		while (minutes != 59)
		{
			minutes++;
			printf("%02d:%02d\n", hours, minutes);
		}
		if (hours == 23 && minutes == 59)
		{
			daysDone = 1;
		}
		hours++;
		minutes = 0;
	}
}
