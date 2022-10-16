#include <stdio.h>

/**
 * main - print all possible different combinations of three digits
 *
 * Return: Always 0 (sucess)
 */

int main(void)
{
	int d1;
	int d2;
	int d3;

	for (d1 = 48; d1 <= 57; d1++)
	{
		for (d2 = d1 + 1; d2 <= 57; d2++)
		{
			for (d3 = d2 + 1; d3 <= 57; d3++)
			{
				putchar(d1);
				putchar(d2);
				putchar(d3);

				if ((d1 != 55) || (d2 != 56) || (d3 != 57))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
