#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 success
 */

int main(void)
{
	int a = 1;
	int b = 2;
	int i, temp;

	for (i = 0; i < 98; i++)
	{
		if (i > 0)
		{
			printf(", ");
		}
		printf("%d", b);

		temp = a;
		a = b;
		b = temp + b;
	}
	printf("\n");
	return (0);
}
