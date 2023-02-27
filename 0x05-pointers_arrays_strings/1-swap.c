#include "main.h"

/**
 * swap_int - swap two integer
 * @a: first integer
 * @b: second integer
 */

void swap_int(int *a, int *b)
{
	int change; /*used to change the storage empty space */

	change = *a;

	*a = *b;

	*b = change;
}
