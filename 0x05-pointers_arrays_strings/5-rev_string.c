#include "main.h"
#include <stdio.h>

/**
 * rev_string - prints a string in reverse
 * @s: argument
 */

void rev_string(char *s)
{
	int i;
	int l;
	char rev;

	for (l = 0; s[l] != '\0'; l++)
		;

	for (i = 0, l--; i < l; i++, l--)
	{
		rev = s[i];
		s[i] = s[l];
		s[l] = rev;
	}
}
