#include "main.h"

/**
 * _islower - checks lower cases characters
 *
 * Return: 1 in case its lowercase or 0 for anything else
 *
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
