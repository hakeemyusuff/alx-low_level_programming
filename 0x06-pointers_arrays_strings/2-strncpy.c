#include "main.h"

/**
 * _strncpy - concatenates two strings
 * @dest: destination
 * @src: source
 * @n: number of char to concatenates from src
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int len_dest;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
