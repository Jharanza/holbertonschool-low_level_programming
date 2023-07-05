#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function that initialize a variable
 *
 * @d: Dog struct
 *
 * @name: Var name of the dog struct
 *
 * @age: Var age of the dog struct
 *
 * @owner: Var owner of the dog struct
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
