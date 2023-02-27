#include "main.h"

/**
 * swap_int - swaps values of two integers
 * @a: argument 1
 * @b: argument 2
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
