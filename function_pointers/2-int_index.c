#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that executes a function given as
 * a parameter on each element of an array.
 *
 * @array: Pointer at array
 *
 * @size: Size of array
 *
 * @cmp: Name of the function pointer
 *
 * Return: A value integer
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || *cmp == NULL)
		return (-1);

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
