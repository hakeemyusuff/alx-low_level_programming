#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char alpha;
	int line;

	for (line = 1; line < 11; line++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
