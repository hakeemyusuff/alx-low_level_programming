#include "main.h"

/**
 * print_line - draws a straight line
 * @n: numbers of line to be printed
 */

void print_line(int n)
{
	int b;

	if (n > 0)
	{
		for (b = 1; b <= n; b++)
			_putchar('_');
	}
	_putchar('\n');
}
