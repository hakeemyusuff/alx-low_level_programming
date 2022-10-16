#include <stdio.h>

/**
 * main - print alphabet in lowercase and in reverse
 *
 * Return: Always 0 (sucess)
 */

int main(void)
{
	int alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}

	putchar('\n');
	return (0);
}
