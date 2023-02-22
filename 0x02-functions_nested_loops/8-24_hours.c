#include "main.h"

/**
 * jack_bauer - prints every minutes of the day
 *
 */

void jack_bauer(void)
{
	int h_t, h_u, min, sec;

	for (h_t = '0'; h_t <= '2'; h_t++)
	{
		for (h_u = '0'; h_u <= '9'; h_u++)
		{
			if ((h_t == '2') && (h_u == '4'))
				break;
			for (min = '0'; min <= '5'; min++)
			{
				for (sec = '0'; sec <= '9'; sec++)
				{
					_putchar(h_t);
					_putchar(h_u);
					_putchar(':');
					_putchar(min);
					_putchar(sec);
					_putchar('\n');
				}
			}
		}
	}
}
