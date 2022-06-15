#include "main.h"

/**
* times_table - function that prints the 9 times table, starting with 0.
*/

void times_table(void)
{
	int n = 0, m = 0, times_table = 0;

	for (; n < 10; n++)
	{
		_putchar('0');
		_putchar(',');

		for (m = 1; m < 10; m++)
		{
			times_table = n * m;
			if (times_table >= 10)
			{
				_putchar(' ');
				_putchar((times_table / 10) + '0');
				_putchar((times_table % 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(times_table + '0');
			}
			if (m < 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
