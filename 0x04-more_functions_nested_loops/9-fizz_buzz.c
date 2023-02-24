#include <stdio.h>

/**
 * main - FIZZ-BUZZ-test
 *
 * Return: 1 on sucess
 */

int main(void)
{
	int num;

	num = 1;

	while (num <= 100)
	{
		if ((num % 3 == 0) && (num % 5 != 0))
			printf("Fizz ");
		else if ((num % 5 == 0) && (num % 3 != 0))
			printf("Buzz ");
		else if (((num % 5) && (num % 3)) == 0)
			printf("FizzBuzz ");
		else
			printf("%d ", num);
		num++;
	}
	printf("\n");

	return (0);
}
