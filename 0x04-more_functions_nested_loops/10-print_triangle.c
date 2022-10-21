#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: the size of the triangle
 */

void print_triangle(int size)
{
	int row;
	int space;
	int col;

	if (size > 0)
	{
	for (row = 0; row < size; row++)
	{
		for (space = size - row; space > 1; space--)
		{
			_putchar(' ');
		}
		for (col = 0; col <= row; col++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	}
	else
	{
		_putchar('\n');
	}
}
