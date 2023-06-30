#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the result of the multiplication
 *
 * @argc: Count the total alrguments
 *
 * @argv: Array with arguments
 *
 * Return: Always 0
 *
 */

int main(int argc, char *argv[])
{

	int x;
	int y;

	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);

		printf("%d\n", x * y);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}

