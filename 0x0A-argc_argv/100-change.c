#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints no of coins to make change for an amount of money
 * @argc: argument count
 * @argv: cents to give change
 * Return: 0 on sucess 1 when argument is not 1
 */

int main(int argc, char *argv[])
{
	int number, i;

	if (argc - 1 != 1)
	{
		printf("Error\n");
		return (1);
	}
	number = atoi(argv[1]);
	i = 0;
	while (number > 0)
	{
		if (number >= 25)
		{
			number -= 25;
			i++;
		}
		else if (number >= 10)
		{
			number -= 10;
			i++;
		}
		else if (number >= 5)
		{
			number -= 5;
			i++;
		}
		else if (number >= 2)
		{
			number -= 2;
			i++;
		}
		else
		{
			number -= 1;
			i++;
		}
	}
	printf("%d\n", i);
	return (0);
}
