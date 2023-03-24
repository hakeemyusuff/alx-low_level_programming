#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum all of its parameters
 * @n: no of arguments
 * Return: sum or 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	int sum;

	sum = 0;
	va_start(arg, n);

	if (n)
	{
		for (i = 0; i < n; i++)
		{
			sum += va_arg(arg, int);
		}
	}
	va_end(arg);
	return (sum);
}
