#include "main.h"

/**
 * _abs - computes the absoolute the value of an integer
 * @d: value to perform operation on
 * Return: Always 0 (sucess)
 */

int _abs(int d)
{
	int result;

	if (d < 0)
	{
		result = -1 * d;
		return (result);
	}
	return (d);
}
