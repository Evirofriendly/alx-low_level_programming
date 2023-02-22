#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 *
 * @n:  number to times
 */

void print_times_table(int n)
{
	int num, multi, result;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');

			for (multi = 1; multi <= 1; multi++)
			{
				_putchar(',');
				_putchar(' ');

				result = num * multi;

				if (result <= 99)
					_putchar(' ');
				else if (result <= 9)
					_putchar(' ');
				if (result >= 100)
				{
					_putchar((result / 100) + '0');
					_putchar((result / 10) + '0');
				}
				else if (result <= 99 && result >= 10)
				{
					_putchar((result / 10) + '0');
				}
				_putchar((result % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
