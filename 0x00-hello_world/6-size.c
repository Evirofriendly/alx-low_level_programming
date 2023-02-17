#include <stdio.h>

/**
 * main - Entry point, printing differnt size of computer data type
 *
 * Return: Always 0 (successs)
 */

int main(void)
{
	printf("Size of int Data Type in C = %2d bytes \n", Sizeof(short int));
	printf("Size of Long int Data Typecin C = %2d bytes \n", Sizeof(long int));
	printf("Size of Float Data Type in C = %2d bytes \n", Sizeof(float));
	printf("Size of Double Data Type in C = %2d bytes \n", Sizeof(double));
	printf("Size of Long Double Data Type in C = %2d \n", Sizeof(long double));
	printf("Size of char Data Types in C = %2d \n", Sizeof(char));
	return (0);
}

