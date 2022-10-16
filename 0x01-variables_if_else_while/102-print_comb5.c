#include <stdio.h>
/**
 * main - print all possible combinations of two two-digit numbers.
 *
 * Return: Always 0 (sucess)
 */

int main(void)
{
	int digit_1;
	int digit_2;

	for (digit_1 = 0; digit_1 <= 99; digit_1++)
	{
		for (digit_2 = digit_1 + 1; digit_2 <= 99; digit_2++)
		{

			putchar('0' + (digit_1 / 10));
			putchar('0' + (digit_1 % 10));
			putchar(' ');
			putchar('0' + (digit_2 / 10));
			putchar('0' + (digit_2 % 10));

			if ((digit_1 != 98) || (digit_2 != 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
