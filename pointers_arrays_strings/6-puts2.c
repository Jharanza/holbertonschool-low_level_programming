#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - Prints any other char of a string
 *
 * @str: The variable to be checked
 *
 * Return: void
 *
 */

void puts2(char *str)
{
	int i;
	int j;

	j = strlen(str);

	for (i = 0; i < j; i = i + 2)
	{
		putchar(str[i]);
	}
	putchar(10);
}
