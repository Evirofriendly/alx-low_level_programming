#include "main.h"
                                    /**
 * _isalpha - Checking character for alpha case
 * @c: character to check
 *
 * Return: 1 if is Alpha else 0
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
