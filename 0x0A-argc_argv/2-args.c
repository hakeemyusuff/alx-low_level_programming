#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: arguments count
 * @argv: array of strings
 * Return: 0 on sucess
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
