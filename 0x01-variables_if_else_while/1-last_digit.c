#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Return: Always 0 (sucess)
 */

int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	l = n % 10;

	if ((l < 6) && (l != 0))
	{
		printf("Last digit of %d is %d and is less than", n, l);
		printf(" 6 and not 0\n");
	}
	else if (l == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, l);
	}
	else
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	}
	return (0);
}
