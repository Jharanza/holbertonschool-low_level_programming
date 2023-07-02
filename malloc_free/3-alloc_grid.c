#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: Of the array
 * @height: of the array
 * Return: An array or NULL
 */

int **alloc_grid(int width, int height)
{
	int **a, i, j;
	int length = width * height;

	if (length <= 0)
		return (NULL);

	a = (int **)malloc(sizeof(int *) * height);

	for (i = 0; i < height; i++)
	{
		a[i] = (int *)malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(a[i]);

			free(a);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			a[i][j] = 0;
	}
	return (a);
}
