#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string
 * @str: argurment
 */

void puts_half(char *str)
{
	int i;
	int j;
	int length;
	int middle;
	int n;
	char *temp = str;

	length = 0;
	while (*temp != '\0')
	{
		length++;
		temp++;
	}

	middle = length / 2;
	n = (length - 1) / 2;

	if (length % 2 == 0)
	{
		for (i = middle; i < length; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (j = n + 1; j < length; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
