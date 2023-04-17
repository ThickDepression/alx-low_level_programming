#include "dog.h"
#include <stdio.h>

/**
 *init_dog - a function that initialize a variable of type struct dog
 *@d: the new variable
 *@name: its name
 *@age: its age
 *@owner: its owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
