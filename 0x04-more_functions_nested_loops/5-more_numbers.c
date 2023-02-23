#include "main.h"

/**
 * more_numbers - print num from 0-14 two times
 */

void more_numbers(void)
{
	int y n;

	for (y = 0; y <= 9; y++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
				_putchar((n / 10) + '0');
			_putchar((n % 10) + '0')
		}
		_putchar('\n');
	}
}
