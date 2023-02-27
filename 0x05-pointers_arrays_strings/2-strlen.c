#include "main.h"

/**
 * _strlen - return the lenth of a string
 * @s: check the lenth of the string
 *
 * Return: lenth of the sting
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
	{
		length++;
	}
	return (length);
}
