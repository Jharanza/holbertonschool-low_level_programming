#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - Returns an array of chars
 *
 * @size: The size of the array
 *
 * @c: The character in the array
 *
 * Return: An array
 *
 */

char *create_array(unsigned int size, char c);
{
	unsigned int i = 0;
	char *str = (char *)malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}

	if (str == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		str[i] = c;
		i++;
	}

	return (str);
}
