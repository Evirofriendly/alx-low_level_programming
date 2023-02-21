#include "main.h"

/**
 * print_sign - print sign or number
 * @n: check the charaacter
 *
 * Return: 1 if is greater than 0 otherwise 0 if (success)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
