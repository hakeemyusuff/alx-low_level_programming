#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: valuec to be checkked
 * Return: 1 on sucess
 * Return 0 if it's false
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
