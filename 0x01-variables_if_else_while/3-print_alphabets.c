#include <stdio.h>

/**
 * main - Entry program point printing uppercase and lowercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char prin;

	for (prin = 'a' ; prin <= 'z' ; prin++)
	{
		putchar(prin);
	}
	for (prin = 'a' ; prin <= 'z' ; prin++)
	{
		putchar(toupper(prin));
	}
	putchar('\n');
	return (0);
}
