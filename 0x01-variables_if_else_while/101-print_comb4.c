#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry program point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	/* loop through three digit number */

	int x, y, z;

	/*loop the first digi */

	for (x = 0 ; x <= 8 ; x++)
	{
		/* loop the second digit */
		for (y = x + 1 ; y <= 9 ; y++)
		{
			/* loop the third digit */

			for (z = y + 1 ; z <= 10 ; z++)
			{
				putchar((x % 10) + '0');
				putchar((y % 10) + '0');
				putchar((z % 10) + '0');

				/* continue adding comma, and space */
				if (x == 8 && y == 9 && z == 10)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar("\n");
	return (0);
}
