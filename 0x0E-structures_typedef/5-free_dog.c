#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - This function frees dogs
 *
 * @d: Dog to be freed
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
