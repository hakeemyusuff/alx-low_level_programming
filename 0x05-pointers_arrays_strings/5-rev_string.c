#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: argument
 */

void rev_str(char *s)
{
	int i;
	int l;
	char rev_str[10] = "\0";

	for (l = 0; *s != '\0'; l++)
	{
		s++;
	}

	for (i = l; i >= 0; i--)
	{
		rev_str[10] = *s;
		s--;
	}
	*s = rev_str[10];
}
