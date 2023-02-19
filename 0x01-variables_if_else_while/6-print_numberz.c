#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point for program
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int y;

	for (y = 0 ; y < 10 ; y++)
		putchar((y % 10 + '0'));
	putchar('\n');
	return (0);
}
