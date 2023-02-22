#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: number to print the sign
 * Return: 1 if it's greater than 0
 * return 0 if number is 0 and return -1 if number less than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
