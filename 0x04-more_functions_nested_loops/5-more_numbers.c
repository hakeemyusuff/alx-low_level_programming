#include "main.h"

/**
 * more_numbers - prints 10 times the numbers
 */

void more_numbers(void)
{
	int row, num;

	for (row = 0; row < 10; row++)
	{
		for (num = 0; num < 15; num++)
		{
			if (num > 9)
			{
				_putchar((num / 10) + '0');
			}
			_putchar(num % 10 + '0');
		}
		_putchar('\n');
	}
}
