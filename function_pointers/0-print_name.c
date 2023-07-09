#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name
 *
 * @name: pointer to a character
 *
 * @f: Name of the function ponter
 *
 * @(+f)(char *): function pointer
 *
 * Return: void
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;

	if (*f == NULL)
		return;

	(*f)(name);
}
