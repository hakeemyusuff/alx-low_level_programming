#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: array of strings
 * Return: 1 on success
 */

int main(int argc, char *argv[])
{
	int a;
	int b;
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	mul = a * b;
	printf("%d\n", mul);
	return (0);
}
