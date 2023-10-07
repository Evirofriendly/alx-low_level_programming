#include <stdio.h>

/**
 * main - print combination of two digit
 *
 * Return: Always Success
 */

int main(void)
{
	int j, d;

	for (j = 0; j < 8; j++)
	{
		for (d = j + 1; d < 9; d++)
		{
			putchar((j % 10) + '0');
			putchar((d % 10) + '0');
			if (j == 8 && d == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
