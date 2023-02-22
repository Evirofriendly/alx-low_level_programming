#include <stdio.h>

/**
 * main - Entry point first 50 number
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int m;
	unsigned long f1 = 0, f2 = 1, fm2;

	for (m = 0; m < 50; m++)
	{
		fm2 = f1 + f2;
		printf("%lu", fm2);

		f1 = f2;
		f2 = fm2;

		if (m == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
