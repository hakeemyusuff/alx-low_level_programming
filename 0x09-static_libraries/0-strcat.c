#include "main.h"

/**
 * _strcat - it concatenates two strings
 * @dest: destination
 * @src: source
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int len;
	char temp_mem[500];

	for (len = 0; dest[len] != '\0'; len++)
		;
	i = 0;
	while (dest[i] != '\0')
	{
		temp_mem[i] = dest[i];
		i++;
	}
	temp_mem[i] = '\0';
	i = len;
	while (src[i - len] != '\0')
	{
		temp_mem[i] = src[i - len];
		i++;
	}
	temp_mem[i] = '\0';
	i = 0;
	while (temp_mem[i] != '\0')
	{
		dest[i] = temp_mem[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
