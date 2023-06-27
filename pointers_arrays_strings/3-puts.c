#include "main.h"

/**
 * _puts - Prints a string
 *
 * @str: String to be printed
 *
 * Return: void
 *
 */

void _puts(char *str)
{

	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar(10);
}
