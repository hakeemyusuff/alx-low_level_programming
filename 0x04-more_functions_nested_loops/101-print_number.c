#include "main.h"

/**
 * print_number - print an integer
 * @n: integer to be printed
 */

void print_number(int n)
{
	unsigned int val;

	if (n < 0)
	{
		val = -n;
		_putchar('-');
	} else
	{
		val = n;
	}

	if (val / 10)
	{
		print_number(val / 10);
	}

	_putchar((val % 10) + '0');
}
