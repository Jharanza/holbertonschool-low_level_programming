#include "main.h"

/**
 * _isalpha - checks either lowercase or upppercase letters
 *
 * @c: variable to be check
 *
 * Return: 1 in case its lowercase or uppercase letter, 9 in other cases
 *
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
