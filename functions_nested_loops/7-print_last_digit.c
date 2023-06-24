#include "main.h"

/**
 * print_last_digit - Print the last digit of any number
 *
 * @n: Variable to check
 *
 * Return: The last digit of the variable
 *
 */

int print_last_digit(int n)
{
	int resto = n % 10;
	if (resto < 0)
	{
		resto = resto * -1;
	}
	_putchar(resto + '0');
	return (resto);
}
