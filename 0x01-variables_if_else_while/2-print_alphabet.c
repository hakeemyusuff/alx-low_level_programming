#include <stdio.h>

/**
 * main - Entry point
 *
 *Return: Always 0 (sucess)
 */

int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
		putchar(lower);

	putchar('\n');
	return (0);
}
