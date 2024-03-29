#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initialises variables of type struct dog
 * @d: Pointer to the struct dog initiased.
 * @name: Name initialised.
 * @age: Age initialised.
 * @owner: Owner initialised.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
