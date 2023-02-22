#include <stdio.h>

/**
 * main - Entry program point multiple of 5
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int y, total = 0;

	for (y = 0; y <= 1023; y++)
	{
		if ((y % 3) == 0 || (y % 5) == 0)
			total = total + y
	}
	printf("%d\n", total);

	return (0);
}
