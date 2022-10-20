#include "main.h"

/**
 * more_numbers - print 10times the numbers from 0 to 14
 */

void more_numbers(void)
{
	int row;
	int col;

	for (row = 0; row <= 10; row++)
	{
		for (col = 0; col <= 14; col++)
		{
			if (col >= 10)
			{
				_putchar('0' + (col / 10));
			}
			_putchar('0' + (col % 10));
		}
		_putchar('\n');
	}
}
