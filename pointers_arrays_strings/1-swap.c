#include "main.h"

/**
 * swap_int - Swaps the values of 2 integers
 *
 * @a: First variable
 *
 * @b: Second variable
 *
 * Return: void
 *
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
