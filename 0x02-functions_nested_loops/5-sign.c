#include "main.h"

/**
 * print_sign - print the sign of a number
 * @n: nmber to be checked
 * Return: 1 an + if possitive 0 and 0 if neutral - and -1 if negative
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n > 0)
	{
		_putchar(45);
		return (-1);
	}
}
