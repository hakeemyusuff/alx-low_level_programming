#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int h, b;

	if (size > 0)
	{
		for (h = 0; h < size; h++)
		{
			for (b = size; b >= 0; b--)
			{
				if (b > h)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
