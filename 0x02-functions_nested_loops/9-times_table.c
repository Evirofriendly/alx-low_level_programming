#include "main.h"

/**
 * times_table - printing 9 times table
 */

void times_table(void)
{
	int t, d, result;

	for (t = 0; t <= 9; t++)
	{
		_putchar('0');

		for (d = 1; d <= 9; d++)
		{
			_putchar(',');
			_putchar(' ');
			result = t * d;
			if (result <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((result / 10) + '0');
			}
			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}
