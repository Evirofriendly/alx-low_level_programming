#include <stdio.h>

/**
 * Entry point of program
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int count;
	unsigned long lib1 = 0, lib2 = 1, libsum;
	unsigned long lib1_half1, lib1_half2, lib2_half1, lib2_half2;
	unsigned long half1, half2;

	for (count = 0; count < 92; count++)
	{
		libsum = lib1 + lib2;
		printf("%lu, ", libsum);

		lib1 = lib2;
		lib2 = libsum;
	}

	lib1_half1 = lib1 / 10000000000;
	lib2_half1 = lib2 / 10000000000;
	lib1_half2 = lib1 % 10000000000;
	lib2_half2 = lib2 % 10000000000;

	for (count = 93; count < 99; count++)
	{
		half1 = lib1_half1 + lib2_half1;
		half2 = lib1_half2 + lib2_half2;

		if (lib1_half2 + lib2_half2 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}

		printf("%lu%lu", half1, half2);
		if (count != 98)
			printf(", ");

		lib1_half1 = lib2_half1;
		lib1_half2 = lib2_half2;
		lib2_half1 = half1;
		lib2_half2 = half2;
	}
	printf("\n");
	return (0);
}
