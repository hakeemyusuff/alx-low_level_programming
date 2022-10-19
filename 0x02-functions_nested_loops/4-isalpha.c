#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: character to be checked
 * Return: if it is a letter lower or  upper 1 else 0
 */

int _isalpha(int c)
{
	if (((c >= 65) && (c <= 90)) || ((c >= 97) && (c <= 122)))
		return (1);
	else
		return (0);
}
