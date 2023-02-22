#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: number to start counting from
 */

void print_to_98(int n)
{
	int a;
	int b;

	if (n > 98)
	{
		for (a = n; a >= 98; a--)
		{
			printf("%d", a);
			if (a != 98)
				printf(", ");
		}
	}
	else
	{
		for (b = n; b <= 98; b++)
		{
			printf("%d", b);
			if (b != 98)
				printf(", ");
		}
	}
	printf("\n");
}
