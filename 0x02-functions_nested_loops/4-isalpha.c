#include "main.h"

/**
 * _isalpha - Check for Alpha
 * @c: character to check
 *
 * Return: 1 if is Alphabet else 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
