#include <stdio.h>

/**
 * main - pri9nting alphabet in lower and upper case
 *
 * Return: Always 0 if success
 */

int main(void)
{
	char e, upper_e;

	for (e = 'a'; e <= 'z'; e++)
	{
		putchar(e);
	}
	for (upper_e = 'A'; upper_e <= 'Z'; upper_e++)
	{
		putchar(upper_e);
	}
	putchar('\n');
	return (0);
}
