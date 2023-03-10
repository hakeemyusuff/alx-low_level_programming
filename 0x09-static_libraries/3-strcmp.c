#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 1 if string is >, 0 if equal -1 if less
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int j;

	for (i = 0, j = 0; s1[i] != '\0' && s2[j] != '\0'; i++, j++)
	{
		if (s1[i] < s2[j])
			return (s1[i] - s2[j]);
		else if (s1[i] > s2[j])
			return (s1[i] - s2[j]);
	}

	if (s1[i] == '\0' && s2[j] == '\0')
		return (0);
	else if (s1[i] == '\0')
		return (s1[i] - s2[j]);
	else
		return (s1[i] - s2[j]);
}
