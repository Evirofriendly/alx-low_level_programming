#include <stdio.h>

/**
 * main - print hexadecimal number
 *
 * Return: 0 if sucess
 */

int main(void)
{
	int h;

	for (h = 0; h <= 15; h++)
	{
		if (h < 10)
		{
			putchar('0' + h);
		}
		else
			putchar('a' + h - 10);
	}
	putchar('\n');
	return (0);
}
