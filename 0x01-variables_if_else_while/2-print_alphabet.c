#include <stdio.h>

/**
 * main - prints the alphabet in lowercas followed by a new line
 *
 * Return: Always 0 (sucess)
 */

int main(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
