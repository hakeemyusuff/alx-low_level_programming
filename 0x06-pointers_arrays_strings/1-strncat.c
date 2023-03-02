#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination
 * @src: source
 * @n: number of char to concatenates from src
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len_dest;
	int len_src;

	for (len_dest = 0; dest[len_dest] != '\0'; len_dest++)
		;
	for (len_src = 0; src[len_src] != '\0'; len_src++)
		;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i + len_dest] = src[i];
		i++;
	}

	if (i + len_dest < n)
		dest[i] = '\0';
	return (dest);
}
