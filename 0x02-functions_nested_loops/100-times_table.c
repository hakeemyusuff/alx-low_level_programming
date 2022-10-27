#include "main.h"

/**
 * print_times_table - print 9 times table, startingg with 0
 * @n: nrmber to print the times table
 */

void print_times_table(int n)
{
	int a, b, r;

	if ((n <= 15) && (n >= 0))
	{
	for (a = 0; a <= n; a++)
	{
		_putchar('0');
		for (b = 1; b < n; b++)
		{
			_putchar(',');
			_putchar(' ');

			r = a * b;
			if (r < 10)
			{
				_putchar(' ');
			}
			else if (r < 100)
			{
				_putchar(' ');
/*
				_putchar(' ');
*/
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
}
