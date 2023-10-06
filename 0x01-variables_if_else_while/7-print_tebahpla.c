#include <stdio.h>

/**
 * main - Printing alphabet in reverse
 *
 * Return: Always 0
 */

int main(void)
{
	int y;

	for (y = 0; y < 26; y++)
	{
		putchar('z' - y);
	}
	putchar('\n');
	return (0);
}
