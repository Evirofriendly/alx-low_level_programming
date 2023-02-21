#include "main.h"

/**
 * _islower - checks for lowercase in the alphabet
 * @c: check for the character
 *
 * Return: if is lower 1 otherwise always 0 (success);
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
