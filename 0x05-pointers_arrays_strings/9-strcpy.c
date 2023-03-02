#include "main.h"

/**
 * _strcpy - copy strings
 * @dest: destination
 * @src: source
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int j;
	char temp_mem[500];

	i = 0;
	j = 0;

	while (src[i] != '\0')
	{
		temp_mem[i] = src[i];
		i++;
	}
	temp_mem[i] = '\0';

	while (temp_mem[j] != '\0')
	{
		dest[j] = temp_mem[j];
		j++;
	}
	dest[j] = '\0';

	return (dest);
}
