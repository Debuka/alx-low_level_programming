#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Funtion that frees
 * memory allocated for a struct dog.
 * @d: The struct to free
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
