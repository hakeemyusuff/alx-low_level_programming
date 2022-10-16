#include <stdio.h>
/**
 * main - prints all possible combination of single-digit numbers
 *
 * Return: Always 0 (sucess)
 */

int main(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);

		if (c != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar(0);
	return (0);
}
