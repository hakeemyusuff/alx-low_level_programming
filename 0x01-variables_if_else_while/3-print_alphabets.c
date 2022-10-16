#include <stdio.h>

/**
 * main - print the alphabet in lowercase and then in uppercase.
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
	int a, b;

	for (a = 97; a <= 122; a++)
	{
		putchar(a);
	}

	for (b = 65; b <= 90; b++)
	{
		putchar(b);
	}

	putchar('\n');

	return (0);
}
