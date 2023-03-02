#include "main.h"

/**
 * _strcat - concantenate a two string
 * @dest: first string
 * @src: second string
 *
 * Return: string dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i++])
	{
		j++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i + j] = src[i];
	}

	dest[i + j] = '\0';
	return (dest);

}
