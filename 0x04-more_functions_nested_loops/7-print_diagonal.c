#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ will be printed
 */

void print_diagonal(int n)
{
	int first;
	int sec;

	if (n > 0)
	{
		for (first = 0; first <= n; first++)
		{
			for (sec = 0; sec <= n; sec++)
			{
				if (sec == first)
					_putchar('\\');
				else if (first > sec)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
