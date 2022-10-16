#include <stdio.h>

/**
 * main- prints all possible different combinations of two digits
 *
 * Return: Always 0 (sucess)
 */

int main(void)
{
	int digit_1;
	int digit_2;

	for (digit_1 = 48; digit_1 <= 57; digit_1++)
	{
		for (digit_2 = digit_1 + 1; digit_2 <= 57; digit_2++)
		{
			putchar(digit_1);
			putchar(digit_2);

			if ((digit_1 != 56) || (digit_2 != 57))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
