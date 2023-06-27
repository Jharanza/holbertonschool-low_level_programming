#include "main.h"

/**
 * factorial - returns the number´s factorial
 *
 * @n: Number to be factorial
 *
 * Return: The factorial of n
 *
 */

int factorial(int n)
{
	int fr = 1;

	if (n == 0)
	{
		return (1);
	}
	else if (n <= -1)
	{
		return (-1);
	}

	fr = n * factorial(n - 1);

	return (fr);
}
