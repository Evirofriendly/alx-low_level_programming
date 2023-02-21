#include "main.h"

/**
 * print_alphabet_x10 - printing alphabet 10 times in lower case
 */

void print_alphabet_x10(void)
{
	int half = 0;
	char prin;

	while (half <= 9)
	{
		for (prin = 'a'; prin <= 'z'; prin++)
		{
			_putchar(prin);
		}
		_putchar('\n');
		half++;
	}
}
