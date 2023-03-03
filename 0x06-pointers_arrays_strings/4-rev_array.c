#include "main.h"

/**
 * reverse_array - reverses the content of an array of int
 * @a: array
 * @n: numbers of array to be reversed
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	j = n - 1;

	for (i = 0; i < n / 2; i++, j--)
	{
		int tmp;

		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
