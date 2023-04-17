#include "dog.h"
#include <stdlib.h>

/**
 *free_dog - a function that frees dogs.
 *@d: dogs
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);

}
