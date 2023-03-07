#include "main.h"

/**
 * string_toupper - changes all lowercase
 * @c: argument
 * Return: char
 */

char *string_toupper(char *str)
{
	int con;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 97) && (str[i] <= 122))
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}

}
