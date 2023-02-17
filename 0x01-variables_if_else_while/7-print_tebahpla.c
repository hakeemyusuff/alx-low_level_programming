#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (sucess)
 */

int main(void)
{
	char rewol;

	for (rewol = 'z'; rewol >= 'a'; rewol--)
	{
		putchar(rewol);
	}
	putchar('\n');

	return (0);
}
