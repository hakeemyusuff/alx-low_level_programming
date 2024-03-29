#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers to be printed
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));

		if ((separator != NULL) && (i < n - 1))
		{
			printf("%s", separator);
		}
	}
	va_end(numbers);
	printf("\n");
}
