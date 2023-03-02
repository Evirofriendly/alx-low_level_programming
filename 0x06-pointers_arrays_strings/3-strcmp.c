#include "main.h"

/**
 * _strcmp - comparing two string
 * @s1: the first string
 * @s2: the second string
 *
 * Return: if is negative or positive
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (s1 - s2);
}
