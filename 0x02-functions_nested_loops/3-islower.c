#include "main.h"

/**
 * _islower - Checking character for lower case
 * @c: character to check
 *
 * Return: 1 if is lower else 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
