#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: argument
 * Return: length of string
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; *s != '\0'; len++)
	{
		s++;
	}
	return (len);
}
