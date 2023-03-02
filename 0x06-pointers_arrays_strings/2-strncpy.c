#include "main.h"

/**
 * _strncpy - copy a two string function
 * @dest: sting to be copy
 * @src: the second argument of thestring
 * @n: the outcome of the sting received
 *
 * Return: string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (src[i++])
	{
		j++;
	}

	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}

	for (i = j; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
