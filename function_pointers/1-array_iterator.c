#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Takes an array of integers and a function
 * pointer to iterate
 *
 * @array: argument of array
 *
 * @size: size of the array
 *
 * @action: function pointed to a int
 *
 * Return: Void
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL)
		return;

	if (*action == NULL)
		return;

	while (i < size)
	{
		(*action)(array[i]);
		i++;
	}
}
