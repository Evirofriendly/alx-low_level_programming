#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 if success
 */

int main(void)
{
	int loop;
	unsigned long f1 = 0, f2 = 1, fib;

	for (loop = 0; loop < 50; loop++)
	{
		fib = f1 + f2;
		printf("%lu", fib);

		f1 = f2;
		f2 = fib;

		if (loop == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
