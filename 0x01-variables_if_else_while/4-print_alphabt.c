#include <stdio.h>
#include <stdio.h>

/**
 * main - Entry program point alphabet game
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char prin;

	for (prin = 'a' ; prin <= 'z' ; prin++)
	{
		if (prin != 'q' && prin != 'e')
			putchar(prin);
	}
	putchar('\n');
	return (0);
}
