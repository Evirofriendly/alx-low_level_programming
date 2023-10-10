#include "main.h"

/**
 * print_sign - print sign
 * @n: character to print
 *
 * Return: value and print
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
