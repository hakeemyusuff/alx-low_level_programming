#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headerss goest there */

/**
 * main - The program will assign a random number to the variable n each time\
 it is executed and determines whether the mumber stored in the variable n is\
 positive or negative
 *
 * Return: Always 0 (sucess)
 */

/* betty style doc for function main got there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;


	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	/* your code goes there */
	return (0);
}
