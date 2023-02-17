#include <stdio.h>

/**
 * main - Entry point, printing differnt size of computer data type
 *
 * Return: Always 0 (successs)
 */

int main(void)
{
	printf("Size of an int: %1d byte(s)\n", Sizeof(int));
	printf("Size of a long int: %1d byte(s)\n", Sizeof(long int));
	printf("Size of a float: %1d byte(s)\n", Sizeof(float));
	printf("Size of a double:  %1d byte(s)\n", Sizeof(double));
	printf("Size of a char: %1d byte(s)\n", Sizeof(char));
	return (0);
}

