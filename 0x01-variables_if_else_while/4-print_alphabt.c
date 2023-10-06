#include <stdio.h>

/**
 * main - printing alphabet
 *
 * Return: Always 0 if Success
 */

int main(void)
{
	char e;

	for (e = 'a'; e <= 'z'; e++)
	{
		if (e != 'q' && e != 'e')
		{
			putchar(e);
		}
	}
	putchar('\n');
	return (0);

}
