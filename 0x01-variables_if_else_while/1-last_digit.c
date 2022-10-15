#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headerss goest there */

/**
 * main - The program will assign a random number to the variable n each time\
 it is executed and print the last digit of the number stored\
 in the variable n.
 *
 * Return: Always 0 (sucess)
 */

/* betty style doc for function main got there */
int main(void)
{
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	l = n % 10;

	if (l > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	}
	else if (l == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, l);
	}
	else if (l < 6 && l != 0)
	{
		printf("Last digit of %d is %d and is less than 6", n, l);
		printf(" and not 0\n");
	}
	/* your code goes there */
	return (0);
}
