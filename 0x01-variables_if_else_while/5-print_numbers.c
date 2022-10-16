#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 from 0 - 9
 *
 * Return: Always 0 (sucess)
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}

	putchar('\n');
	
	return (0);
}
