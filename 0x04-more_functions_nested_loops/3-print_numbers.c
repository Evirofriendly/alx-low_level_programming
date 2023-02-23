#include "main.h"

/**
 * print_most_numbers - check the code
 */

void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		_putchar((n % 10) + '0');
	_putchar('\n');
}
