#include "main.h"

/**
 * print_alphabet_x10 - print alphabet in lowercase x10
 */

void print_alphabet_x10(void)
{
	int alpha;
	int repeat;

	for (repeat = 0; repeat < 10; repeat++)
	{
		for (alpha = 97; alpha <= 122; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
