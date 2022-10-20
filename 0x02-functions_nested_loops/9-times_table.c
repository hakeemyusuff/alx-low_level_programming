#include "main.h"

/**
 * times_table - print 9 times table, startingg with 0
 */

void times_table(void)
{
	int a, b, r;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0');
		for (b = 1; b < 10; b++)
		{
			_putchar(',');
			_putchar(' ');

			r = a * b;
			if (r < 10)
			{
				_putchar(' ');
			}
			else
			{
			       _putchar('0' + (r / 10));
			}

		       _putchar('0' + (r % 10));
		}
		_putchar('\n');
	}
}
