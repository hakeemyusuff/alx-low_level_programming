#include <stdio.h>

/**
 * main - print all alphabet in lowerrcase except q and e
 *
 * Return: Always 0 (sucess)
 */

int main(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		if ((a != 'e') && (a != 'q'))
		{
			putchar(a);
		}
	}

	putchar('\n');

	return (0);
}
