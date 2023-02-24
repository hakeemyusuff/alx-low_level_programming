#include  "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of diagonal to be printed
 */

void print_diagonal(int n)
{
	int b, l;

	if (n > 0)
	{
		for (b = 0; b < n; b++)
		{
			for (l = 0; l < n; l++)
			{
				if (b == l)
					_putchar('\\');
				else if (b > l)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
