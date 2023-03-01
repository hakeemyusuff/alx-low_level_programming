#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: argument
 */

void print_rev(char *s)
{
	int i;
	int l;

	for (l = 0; *s != '\0'; l++)
	{
		s++;
	}

	for (i = l - 1; i >= 0; i--)
	{
		_putchar(*s);
		s += i;
	}
	_putchar('\n');
}
