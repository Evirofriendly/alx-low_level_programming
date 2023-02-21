#include "main.h"

/**
 * _isalpha - printing character in upercase
 * @c: check for character
 *
 * Return: 1 if is lower or upper case otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
