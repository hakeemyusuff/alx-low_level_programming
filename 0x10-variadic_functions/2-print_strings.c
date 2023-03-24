#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: the number of strings passed to function
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list my_string;
	unsigned int i;
	char *word;

	va_start(my_string, n);
	for (i = 0; i < n; i++)
	{
		word = va_arg(my_string, char *);
		if (word == NULL)
			printf("(nil)");
		else
			printf("%s", word);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	va_end(my_string);
	printf("\n");
}
