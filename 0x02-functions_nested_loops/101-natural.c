#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples of 3 and 5
 *
 * Return: Always 0 (sucess)
 */

int main(void)
{
	int sum;
	int l;

	sum = 0;

	for (l = 1; l < 1024; l++)
	{
		if (l % 3 == 0 || l % 5 == 0)
			sum += l;
	}
	printf("%d\n", sum);

	return (0);
}
