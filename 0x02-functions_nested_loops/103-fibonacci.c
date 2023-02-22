#include <stdio.h>

/**
 * main - Program entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	unsigned long lib1 = 0, lib2 = 1, libsum;
	float total_sum;

	while (1)
	{
		libsum = lib1 + lib2;
		if (libsum > 4000000)
			break;
		if ((libsum % 2) == 0)
			total_sum += libsum;

		lib1 = lib2;
		lib2 = libsum;
	}
	printf("%.of\n", total_sum);
	return (0);
}
