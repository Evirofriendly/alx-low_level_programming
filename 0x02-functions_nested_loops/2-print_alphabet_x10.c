#include "main.h"

/**
 * print_alphabet_x10 - printing alphabet in lowercase times 10
 *
 * Return: Nothing
 */

void print_alphabet_x10(void)
{
	char t;
	int f;

	for (t = 0; t < 10; t++)
	{
		for (f = 'a'; f <= 'z'; f++)
		{
			_putchar(f);
		}
		_putchar('\n');
	}
}
