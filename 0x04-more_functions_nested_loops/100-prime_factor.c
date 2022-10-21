#include <stdio.h>

/**
 * main - prime factors
 *
 * Return: Always 0 (sucess)
 */

int main(void)
{
	long int num;
	long int div;
	long int max_prime;

	div = 2;

	num = 612852475143;

	while (num != 0)
	{
		if (num % div != 0)
		{
			div++;
		}
		else
		{
			max_prime = num;
			num /= div;
			if (num == 1)
			{
				printf("%ld\n", max_prime);
				break;
			}
		}
	}
	return (0);
}
