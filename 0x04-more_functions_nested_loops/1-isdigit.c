#include "main.h"

/**
 * _isdigit - printing the last digit of number
 * @c: number
 * Return: 1 if is digi otherwise 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
