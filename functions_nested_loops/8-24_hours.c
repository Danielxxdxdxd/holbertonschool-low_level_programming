#include "main.h"

/**
* jack_bauer - function that prints every minute of the day of Jack Bauer,
* starting from 00:00 to 23:59.
*/

void jack_bauer(void)
{
	int hour = 0, minut = 0;

	for (hour = 0; hour < 24 ; hour++)
	{
		for (minut = 0; minut < 60 ; minut++)
		{
			_putchar(hour / 10 + '0');
			_putchar(hour % 10 + '0');
			_putchar(':');
			_putchar(minut / 10 + '0');
			_putchar(minut % 10 + '0');
			_putchar('\n');
		}
	}
}
