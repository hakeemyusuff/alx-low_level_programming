#include "main.h"

/**
 * jack_bauer - print every minute of the day of jack Bauer
 *
 */

void jack_bauer(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 48; a <= 50; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			if ((a == 50) && (b == 52))
				break;
			for (c = 48; c <= 53; c++)
			{
				for (d = 48; d <= 57; d++)
				{
					_putchar(a);
					_putchar(b);
					_putchar(':');
					_putchar(c);
					_putchar(d);
					_putchar('\n');
				}
			}
		}
	}
}
