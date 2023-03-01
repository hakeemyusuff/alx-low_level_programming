#include <stdio.h>

/**
 * print_array - prints n elements on an array
 * @a: first argument
 * @n: second argument
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
