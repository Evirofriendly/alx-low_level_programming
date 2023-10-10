#include "main.h"

/**
 * print_last_digit - prints last digit of number
 * @l: last digit
 *
 * Return: last number
 */

int print_last_digit(int l)
{
	int last_digit = l % 10;

	if (l < 0)
		last_digit *= -1;
	_putchar(last_digit + '0');
	return (last_digit);
}
