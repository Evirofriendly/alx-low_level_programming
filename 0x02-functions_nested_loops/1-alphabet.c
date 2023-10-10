#include "main.h"

/**
 * print_alphabet - print all the alphabet in lower case
 *
 * Return: NULL
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	putchar('\n');
}
