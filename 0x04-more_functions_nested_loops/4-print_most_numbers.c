#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9 except 2 and 9
 */

void print_most_numbers(void)
{
	int numbers;

	for (numbers = 48; numbers <= 57; numbers++)
	{
		if ((numbers != '2') && (numbers != '4'))
			_putchar(numbers);
	}
	_putchar('\n');
}
