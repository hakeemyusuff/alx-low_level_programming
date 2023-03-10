#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers
 * @argc: number of argument passed
 * @argv: argument passed to the function
 * Return: 0 on sucess
 */

int main(int argc, char *argv[])
{
	int i;
	int result;

	result = 0;
	if (argc - 1 == 0)
	{
		printf("0\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
	if (argv[i][0] >= '0' && argv[i][0] <= '9')
	{
		result += atoi(argv[i]);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	}
	printf("%d\n", result);
	return (0);
}
