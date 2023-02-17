#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (sucess)
 */

int main(void)
{
	int tens;
	int unit;

	for (tens = '0'; tens <= '9'; tens++)
	{
		for (unit = tens + 1; unit <= '9'; unit++)
		{
			putchar(tens);
			putchar(unit);
				if ((tens != '8') || (unit != '9'))
				{
					putchar(',');
					putchar(' ');
				}
		}
	}
	putchar('\n');
	return (0);
}
