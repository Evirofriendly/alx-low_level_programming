#include "main.h"

/**
 * print_alphabet - printing alphabet in lower case
 */

void print_alphabet(void)
{
	char prin;

	for (prin = 'a'; prin <= 'z'; prin++)
	{
		_putchar(prin);
	}
	_putchar('\n');
}
