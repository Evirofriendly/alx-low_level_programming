#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 if success
 */

int main(void)
{
	int n, last_number;
	n = 98;
	last_number = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_number);
	}
	if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_number);
	}
	if (n < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_number);
	}
	return (0);
}
