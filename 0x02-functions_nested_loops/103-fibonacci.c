#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 if success
 */

int main(void)
{
	int a = 1;
	int b = 2;
	int sum = 0;
	int temp;

	while (b < 4000000)
	{
		if (b % 2 == 0)
			sum += b;
		temp = a;

		a = b;
		b = temp + b;
	}
	printf("%d\n", sum);
	return (0);
}
